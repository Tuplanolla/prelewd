{-# LANGUAGE ConstraintKinds #-}
{-# LANGUAGE FlexibleContexts #-}
{-# LANGUAGE NoImplicitPrelude #-}

-- | Ring-like structures.
module Prelewd.RingLike (
  module Prelewd.RingLike) where

import Prelewd.Combinators
import Prelewd.GroupLike
import Prelewd.Types

-- | Laws extend to `add`, `zero` and `mul`.
class (Monoid (Sum a), Semigroup (Product a)) => Ringoid a where
  add :: a -> a -> a
  add = unliftSum2 op
  zero :: a
  zero = getSum iden
  mul :: a -> a -> a
  mul = unliftProduct2 op
  {-# MINIMAL #-}

-- | > leftDistributivity :: forall x y z. mul x (add y z) = add (mul x y) (mul x z)
-- > leftAbsorption :: forall x. mul x zero = zero
class Ringoid a => LeftSeminearring a where
  {-# MINIMAL #-}

-- | > rightDistributivity :: forall x y z. mul (add x y) z = add (mul x z) (mul y z)
-- > rightAbsorption :: forall x. mul zero x = zero
class Ringoid a => RightSeminearring a where
  {-# MINIMAL #-}

-- | This type is also known as `NearSemiring`.
type Seminearring a = (LeftSeminearring a, RightSeminearring a)

-- | Laws extend to `one`.
class (Seminearring a, Abelian (Sum a), Unital (Product a)) => Semiring a where
  one :: a
  one = getProduct iden
  {-# MINIMAL #-}

-- | >
type LeftNearring a = (LeftSeminearring a, Group (Sum a))

-- | >
type RightNearring a = (RightSeminearring a, Group (Sum a))

-- | >
type Nearring a = (LeftNearring a, RightNearring a)

-- | >
type Ring a = (Semiring a, Nearring a)

-- | >
type AbelianRing a = (Ring a, Abelian (Product a))

-- | >
type Field a = (AbelianRing a, Group (Product a))
