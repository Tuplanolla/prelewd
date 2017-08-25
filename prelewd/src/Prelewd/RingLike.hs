{-# LANGUAGE ConstraintKinds #-}
{-# LANGUAGE FlexibleContexts #-}
{-# LANGUAGE NoImplicitPrelude #-}

-- | Ring-like structures.
module Prelewd.RingLike (
  module Prelewd.RingLike) where

import Prelewd.Combinators
import Prelewd.GroupLike
import Prelewd.Types

-- | > exists add.
-- > exists zero.
-- > exists mul.
class (Monoid (Sum a), Semigroup (Product a)) => Ringoid a where
  add :: a -> a -> a
  add = unliftSum2 op
  zero :: a
  zero = getSum iden
  mul :: a -> a -> a
  mul = unliftProduct2 op
  {-# MINIMAL #-}

-- | > forall x y z. mul x (add y z) = add (mul x y) (mul x z)
-- > forall x. mul x zero = zero
class Ringoid a => LeftSeminearring a

-- | > forall x y z. mul (add x y) z = add (mul x z) (mul y z)
-- > forall x. mul zero x = zero
class Ringoid a => RightSeminearring a

-- | This class is also known as `Nearsemiring`.
type Seminearring a = (LeftSeminearring a, RightSeminearring a)

-- | > exists one.
class (Seminearring a, Abelian (Sum a), Unital (Product a)) => Semiring a where
  one :: a
  one = getProduct iden
  {-# MINIMAL #-}

-- |
type LeftNearring a = (LeftSeminearring a, Group (Sum a))

-- |
type RightNearring a = (RightSeminearring a, Group (Sum a))

-- |
type Nearring a = (LeftNearring a, RightNearring a)

-- |
type Ring a = (Semiring a, Nearring a)

-- |
type AbelianRing a = (Ring a, Abelian (Product a))

-- |
type Field a = (AbelianRing a, Group (Product a))
