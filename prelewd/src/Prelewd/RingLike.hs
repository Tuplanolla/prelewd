{-# LANGUAGE ConstraintKinds #-}
{-# LANGUAGE FlexibleContexts #-}
{-# LANGUAGE NoImplicitPrelude #-}

-- | Ring-like structures.
module Prelewd.RingLike (
  module Prelewd.RingLike) where

import Prelewd.Combinators
import Prelewd.GroupLike
import Prelewd.Types

class (Monoid (Sum a), Semigroup (Product a)) => Ringoid a where
  add :: a -> a -> a
  add = unliftSum2 op
  zero :: a
  zero = getSum iden
  mul :: a -> a -> a
  mul = unliftProduct2 op

-- | > forall x. mul x iden = iden
-- | > forall x y z. mul x (add y z) = add (mul x y) (mul x z)
class Ringoid a => LeftSeminearring a

-- | > forall x. mul iden x = iden
-- | > forall x y z. mul (add x y) z = add (mul x z) (mul y z)
class Ringoid a => RightSeminearring a

-- | This class is also known as `Nearsemiring`.
type Seminearring a = (LeftSeminearring a, RightSeminearring a)

class (Seminearring a, Abelian (Sum a), Unital (Product a)) => Semiring a where
  one :: a
  one = getProduct iden

type LeftNearring a = (LeftSeminearring a, Group (Sum a))

type RightNearring a = (RightSeminearring a, Group (Sum a))

type Nearring a = (LeftNearring a, RightNearring a)

type Ring a = (Semiring a, Nearring a)

type AbelianRing a = (Ring a, Abelian (Product a))

type Field a = (AbelianRing a, Group (Product a))
