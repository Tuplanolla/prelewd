{-# LANGUAGE ConstraintKinds #-}
{-# LANGUAGE FlexibleContexts #-}
{-# LANGUAGE NoImplicitPrelude #-}

-- | Lattice-like structures.
module Prelewd.LatticeLike (
  module Prelewd.LatticeLike) where

import Data.Bool ((&&), Bool, not)
import Prelewd.Combinators
import Prelewd.GroupLike
import Prelewd.Types

-- | > reflexivity :: forall x. eq x x = True
-- > symmetry :: forall x y. eq x y = eq y x
-- > transitivity :: forall x y z. eq x y && eq y z ==> eq x z = True
class Equality a where
  eq :: a -> a -> Bool
  {-# MINIMAL eq #-}

-- | > reflexivity :: forall x. le x x = True
-- > antisymmetry :: forall x y. le x y && le y x = eq x y
-- > transitivity :: forall x y z. le x y && le y z ==> le x z = True
class Equality a => PartialOrder a where
  le :: a -> a -> Bool
  le x y = ge y x
  ge :: a -> a -> Bool
  ge x y = le y x
  lt :: a -> a -> Bool
  lt x y = le x y && not (eq x y)
  gt :: a -> a -> Bool
  gt x y = ge x y && not (eq x y)
  {-# MINIMAL le #-}

-- | >
type Semilattice a = (Idempotent a, Abelian a, Semigroup a)

-- | > existence :: exists inf.
-- > existence :: exists sup.
-- > idempotency :: forall x. inf x x = x
-- > symmetry :: forall x y. inf x y = inf y x
-- > associativity :: forall x y z. inf (inf x y) z = inf x (inf y z)
-- > idempotency :: forall x. sup x x = x
-- > symmetry :: forall x y. sup x y = sup y x
-- > associativity :: forall x y z. sup (sup x y) z = sup x (sup y z)
class (Semilattice (Min a), Semilattice (Max a)) => Lattice a where
  inf :: a -> a -> a
  inf = unliftMin2 op
  sup :: a -> a -> a
  sup = unliftMax2 op
  {-# MINIMAL #-}

-- | > totality :: forall x y. le x y || le y x = True
class Lattice a => TotalOrder a where
  {-# MINIMAL #-}
