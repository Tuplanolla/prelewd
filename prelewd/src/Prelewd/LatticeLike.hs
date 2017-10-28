{-# LANGUAGE ConstraintKinds #-}
{-# LANGUAGE FlexibleContexts #-}
{-# LANGUAGE NoImplicitPrelude #-}

-- | Lattice-like structures.
module Prelewd.LatticeLike (
  module Prelewd.LatticeLike) where

import Data.Bool ((&&), Bool (..), not)
import Prelewd.Combinators
import Prelewd.GroupLike
import Prelewd.Types

-- | > reflexivityEq :: forall x. eq x x = True
-- > symmetry :: forall x y. eq x y = eq y x
-- > transitivityEq :: forall x y z. eq x y && eq y z ==> eq x z = True
class Equivalence a where
  eq :: a -> a -> Bool
  neq :: a -> a -> Bool
  neq x y = not (eq x y)
  {-# MINIMAL eq #-}

-- | > reflexivityLe :: forall x. le x x = True
-- > antisymmetry :: forall x y. le x y && le y x ==> eq x y = True
-- > transitivityLe :: forall x y z. le x y && le y z ==> le x z = True
--
-- Laws extend to `lt`, `ge` and `gt`.
class Equivalence a => PartialOrder a where
  le :: a -> a -> Bool
  lt :: a -> a -> Bool
  lt x y = le x y && neq x y
  ge :: a -> a -> Bool
  ge x y = le y x
  gt :: a -> a -> Bool
  gt x y = lt y x
  {-# MINIMAL le #-}

-- | >
type Semilattice a = (Idempotent a, Abelian a, Semigroup a)

-- | Laws extend to `inf` and `sup`.
class (Semilattice (Min a), Semilattice (Max a)) => Lattice a where
  inf :: a -> a -> a
  inf = unliftMin2 op
  sup :: a -> a -> a
  sup = unliftMax2 op
  {-# MINIMAL #-}

-- | > totality :: forall x y. le x y || le y x = True
class Lattice a => TotalOrder a where
  {-# MINIMAL #-}
