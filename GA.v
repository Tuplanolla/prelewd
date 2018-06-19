Require Import ZArith.

Open Scope Z_scope.

Inductive dtree (A : Type) : nat -> Type :=
  | dleaf : A -> dtree A O
  | dbranch : forall n, dtree A n -> dtree A n -> dtree A (S n).

Arguments dleaf {A} x.
Arguments dbranch {A} {n} l r.

Check dbranch (dbranch (dleaf 42) (dleaf 13)) (dbranch (dleaf 7) (dleaf 20)).

Inductive stree (A : Type) : nat -> Type :=
  | sleaf : A -> stree A O
  | sbranch : forall n m, stree A n -> stree A m -> stree A (S (max n m)).

Arguments sleaf {A} x.
Arguments sbranch {A} {n m} l r.

Check sbranch (sbranch (sleaf 42) (sleaf 13)) (sleaf 7).

Check dleaf 42.
Check dbranch (dleaf 42) (dleaf 13).
Check dbranch (dbranch (dleaf 42) (dleaf 13)) (dbranch (dleaf 7) (dleaf 20)).
Fail Check dbranch (dleaf 42) (dbranch (dleaf 7) (dleaf 20)).

Definition dx {A : Type} (t : dtree A O) : A :=
  match t with
  | dleaf x => x
  end.

Definition dl {A : Type} {n : nat} (t : dtree A (S n)) : dtree A n :=
  match t with
  | dbranch l _ => l
  end.

Definition dr {A : Type} {n : nat} (t : dtree A (S n)) : dtree A n :=
  match t with
  | dbranch _ r => r
  end.

Fixpoint dmap {A B : Type} (f : A -> B)
  {n : nat} (t : dtree A n) : dtree B n :=
  match t with
  | dleaf x => dleaf (f x)
  | dbranch l r => dbranch (dmap f l) (dmap f r)
  end.

Fail Fixpoint dzip {A1 A2 B : Type} (f : A1 -> A2 -> B)
  {n : nat} (t1 : dtree A1 n) (t2 : dtree A2 n) : dtree B n :=
  match t1, t2 with
  | dleaf x1, dleaf x2 => dleaf (f x1 x2)
  | dbranch l1 r1, dbranch l2 r2 =>
    dbranch (dzip f l1 l2) (dzip f r1 r2)
  end.

Fail Fail Fixpoint dzip {A1 A2 B : Type} (f : A1 -> A2 -> B)
  {n : nat} (t1 : dtree A1 n) (t2 : dtree A2 n) : dtree B n :=
  match t1 with
  | dleaf x1 => fun t2 => dleaf (f x1 (dx t2))
  | dbranch l1 r1 => fun t2 =>
    dbranch (dzip f l1 (dl t2)) (dzip f r1 (dr t2))
  end t2.

Fixpoint dzip {A1 A2 B : Type} (f : A1 -> A2 -> B)
  {n : nat} (t1 : dtree A1 n) (t2 : dtree A2 n) : dtree B n :=
  match n with
  | O => fun t1 t2 => dleaf (f (dx t1) (dx t2))
  | S _ => fun t1 t2 =>
    dbranch (dzip f (dl t1) (dl t2)) (dzip f (dr t1) (dr t2))
  end t1 t2.

Definition dsmult {A B : Type} (mult : A -> A -> A) (x : A)
  {n : nat} (t : dtree A n) : dtree A n := dmap (mult x) t.

Definition dadd {A B : Type} (add : A -> A -> A) (x : A)
  {n : nat} (t1 t2 : dtree A n) : dtree A n := dzip add t1 t2.

Compute dzip Zplus (dleaf 42) (dleaf 13).
Compute dzip Zplus (dbranch (dleaf 42) (dleaf 13)) (dbranch (dleaf 7) (dleaf 20)).
Fail Compute dzip Zplus (dleaf 42) (dbranch (dleaf 7) (dleaf 20)).

Notation "x + y" := (dzip Zplus x y).
Notation "x * y" := (dmap (Zmult x) y).

(* ~ x = x
   ~ (l, r) = (~ l, - (~ r)) *)
Fixpoint aux {A : Type} (neg : A -> A)
  {n : nat} (t : dtree A n) : dtree A n :=
  match t with
  | dleaf x => dleaf x
  | dbranch l r => dbranch (aux neg l) (dmap neg (aux neg r))
  end.

Notation "~ x" := (aux Zopp x).

Compute aux Zopp (dbranch (dbranch (dleaf 42) (dleaf 13)) (dbranch (dleaf 7) (dleaf 20))).

(* x1 /\ x2 = x1 * x2
   (l1, r1) /\ (l2, r2) = (l1 /\ l2, r1 /\ l2 + (~ l1) /\ r2) *)
Fixpoint deprod {A : Type} (add mult : A -> A -> A) (neg : A -> A)
  {n : nat} (t1 : dtree A n) (t2 : dtree A n) : dtree A n :=
  match n with
  | O => fun t1 t2 => dleaf (mult (dx t1) (dx t2))
  | S _ => fun t1 t2 =>
    dbranch (deprod add mult neg (dl t1) (dl t2))
    (dzip add
      (deprod add mult neg (dr t1) (dl t2))
      (deprod add mult neg (aux neg (dl t1)) (dr t2)))
  end t1 t2.

Notation "x /\ y" := (deprod Zplus Zmult Zopp x y).

(* x1 ** x2 = x1 * x2
   (l1, r1) ** (l2, r2) = (l1 ** l2) + (r1 ** (~ r2)) *)
(** We must run the convoy in reverse here. *)
Fixpoint dsprod {A : Type} (add mult : A -> A -> A) (neg : A -> A)
  {n : nat} (t1 : dtree A n) (t2 : dtree A n) : A :=
  match t1 with
  | dleaf x1 => fun t2 => mult x1 (dx t2)
  | dbranch l1 r1 => fun t2 => add
    (dsprod add mult neg l1 (dl t2))
    (* metric signature here *) (dsprod add mult neg r1 (aux neg (dr t2)))
  end t2.

Notation "x '.*' y" := (dsprod Zplus Zmult Zopp x y) (at level 42).

Compute dsprod Zplus Zmult Zopp
  (dbranch (dbranch (dleaf 42) (dleaf 13)) (dbranch (dleaf 7) (dleaf 69)))
  (dbranch (dbranch (dleaf 42) (dleaf 13)) (dbranch (dleaf 7) (dleaf (Zopp 69)))).

(* Fixpoint flapr {A : Type} (f : forall n, dtree A n -> dtree A n)
  {n : nat} (t : dtree A n) : dtree A n :=
  match t with
  | dleaf x => dleaf x
  | dbranch l r => dbranch (flapr f l) (flapr f (f _ r))
  end. *)
Fixpoint flapr {A : Type} (f : forall n, dtree A n -> dtree A n)
  {n : nat} (t : dtree A n) : dtree A n :=
  match n in nat return dtree A n -> dtree A n with
  | O => fun t => dleaf (dx t)
  | S n => fun t => dbranch (flapr f (dl t)) (flapr f (f _ (dr t)))
  end t.

(* >< x = x
   >< (l, r) = (>< l, >< (~ r)) *)
Fixpoint rev {A : Type} (neg : A -> A)
  {n : nat} (t : dtree A n) : dtree A n :=
  match n in nat return dtree A n -> dtree A n with
  | O => fun t => dleaf (dx t)
  | S n => fun t => dbranch (rev neg (dl t)) (rev neg (aux neg (dr t)))
  end t.

Notation ">< x" := (flapr (aux Zopp) x) (at level 13).

Compute let x := dbranch (dbranch (dleaf 42) (dleaf 13)) (dbranch (dleaf 7) (dleaf 69)) in
  dsprod Zplus Zmult Zopp x (rev Zopp x).

Fixpoint const {A : Type} (z : A)
  {n : nat} : dtree A n :=
  match n with
  | O => dleaf z
  | S _ => let b := const z in dbranch b b
  end.

Compute @const _ 0 2.

Definition inject1 {A : Type} (z : A)
  {n : nat} (t : dtree A n) : dtree A (S n) :=
  dbranch t (const z).

Fixpoint inject {A : Type} (z : A)
  {n m : nat} (t : dtree A n) : dtree A (m + n) :=
  match m in nat return dtree A n -> dtree A (m + n) with
  | O => fun t => t
  | S _ => fun t => dbranch (inject z t) (inject z (const z))
  end t.

Compute @inject _ 0 _ 2 (dbranch (dleaf 42) (dleaf 13)).

(* This is just [dl]. *)
Definition project1 {A : Type}
  {n : nat} (t : dtree A (S n)) : dtree A n :=
  match t with
  | dbranch l r => l
  end.

Fixpoint project {A : Type}
  {n m : nat} (t : dtree A (m + n)) : dtree A n :=
  match m in nat return dtree A (m + n) -> dtree A n with
  | O => fun t => t
  | S k => fun t => project (dl t)
  end t.

Compute @project _ _ 1 (dbranch (dbranch (dleaf 42) (dleaf 13)) (dbranch (dleaf 7) (dleaf 69))).

(* Now define the free algebra and compute specializations. *)

Inductive free (A : Type) (z : A) : Type :=
  | f_lift : A -> free A z
  | f_add : free A z -> free A z -> free A z
  | f_mult : free A z -> free A z -> free A z
  | f_neg : free A z -> free A z.

Arguments f_lift {A} {z} x.
Arguments f_add {A} {z} x y.
Arguments f_mult {A} {z} x y.
Arguments f_neg {A} {z} x.

Check (@f_lift Z 0 42).

Notation "x + y" := (f_add x y).
Notation "- x" := (f_neg x).
Notation "x * y" := (f_mult x y).

Require Import String.

Open Scope string_scope.

Check (@f_lift string "0" "x").
Compute (f_mult (f_lift "x") (f_add (f_lift "y") (f_lift "0")) : free string "0").

(* Structural equality. *)
Fixpoint f_eq {A : Type} (eq : A -> A -> bool)
  {z : A} (a1 a2 : free A z) : bool :=
  match a1, a2 with
  | f_lift x1, f_lift x2 => eq x1 x2
  | f_add x1 y1, f_add x2 y2 => f_eq eq x1 x2 && f_eq eq y1 y2
  | f_mult x1 y1, f_mult x2 y2 => f_eq eq x1 x2 && f_eq eq y1 y2
  | f_neg x1, f_neg x2 => f_eq eq x1 x2
  | _, _ => false
  end.

(* This is weak. *)
Fixpoint simpl {A : Type} {z : A}
  (eq : A -> A -> bool) (a : free A z) : free A z :=
  match a with
  | f_lift x => f_lift x
  | f_add x y => if f_eq eq (f_lift z) x then simpl eq y else
    if f_eq eq (f_lift z) y then simpl eq x else
    f_add (simpl eq x) (simpl eq y)
  | f_mult x y => if f_eq eq (f_lift z) x then f_lift z else
    if f_eq eq (f_lift z) y then f_lift z else
    f_mult (simpl eq x) (simpl eq y)
  | f_neg x => f_neg (simpl eq x)
  end.

Definition string_eq (s1 s2 : string) : bool :=
  if string_dec s1 s2 then true else false.

Compute simpl string_eq
  (f_mult (f_lift "x") (f_add (f_lift "y") (f_lift "0")) : free string "0").

Compute dmap (simpl string_eq)
  (deprod f_add f_mult f_neg
    (dbranch
      (dbranch
        (dbranch (dleaf (f_lift "0")) (dleaf (f_lift "a0")))
        (dbranch (dleaf (f_lift "a1")) (dleaf (f_lift "0"))))
      (dbranch
        (dbranch (dleaf (f_lift "a2")) (dleaf (f_lift "0")))
        (dbranch (dleaf (f_lift "0")) (dleaf (f_lift "0")))))
    (dbranch
      (dbranch
        (dbranch (dleaf (f_lift "0")) (dleaf (f_lift "b0")))
        (dbranch (dleaf (f_lift "b1")) (dleaf (f_lift "0"))))
      (dbranch
        (dbranch (dleaf (f_lift "b2")) (dleaf (f_lift "0")))
        (dbranch (dleaf (f_lift "0")) (dleaf (f_lift "0")))))) :
  dtree (free string "0") 3.

