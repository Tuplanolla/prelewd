{-# LANGUAGE ConstraintKinds #-}
{-# LANGUAGE FlexibleContexts #-}
{-# LANGUAGE MultiParamTypeClasses #-}
{-# LANGUAGE NoImplicitPrelude #-}

-- | Module-like structures.
module Prelewd.ModuleLike (
  module Prelewd.ModuleLike) where

import Prelewd.Combinators
import Prelewd.GroupLike
import Prelewd.LatticeLike
import Prelewd.RingLike
import Prelewd.Types

-- | > existence :: exists smull.
-- > leftModuleDistributivity :: forall r x y. smull r (add x y) = add (smull r x) (smull r y)
-- > leftRingDistributivity :: forall r s x. smull (add r s) x = add (smull r x) (smull s x)
-- > leftCompatibility :: forall r s x. smull (mul r s) x = smull r (smull s x)
-- > leftIdentity :: forall x. smull one x = x
class (Ring r, AbelianGroup a) => LeftModule r a where
  smull :: r -> a -> a
  {-# MINIMAL smull #-}

-- | > existence :: exists smulr.
-- > rightModuleDistributivity :: forall r x y. smulr (add x y) r = add (smulr x r) (smulr y r)
-- > rightRingDistributivity :: forall r s x. smulr x (add r s) = add (smulr x r) (smulr x s)
-- > rightCompatibility :: forall r s x. smulr x (mul r s) = smulr (smulr x s) r
-- > rightIdentity :: forall x. smulr x one = x
class (Ring r, AbelianGroup a) => RightModule r a where
  smulr :: a -> r -> a
  {-# MINIMAL smulr #-}

-- | > quasisymmetry :: forall r x. smull r x = smulr x r
class (LeftModule r a, RightModule r a) => Module r a where
  {-# MINIMAL #-}

-- | >
type LeftVectorSpace r a = (Field r, LeftModule r a)

-- | >
type RightVectorSpace r a = (Field r, RightModule r a)

-- | >
type VectorSpace r a = (Field r, Module r a)

-- | > existence :: exists dist.
-- > _ :: forall x y. le iden (dist x y) = True
-- > _ :: forall x y. (dist x y = iden) = (x = y)
-- > _ :: forall x y. dist x y = dist y x
-- > _ :: forall x y z. le (dist x z) (op (dist x y) (dist y z))
--
-- There is one degree of redundancy in the laws.
class (PartialOrder r, AbelianMonoid r) => MetricSpace r a where
  dist :: a -> a -> r
  {-# MINIMAL dist #-}

-- | > existence :: exists norm.
-- > _ :: forall x. le iden (norm x) = True
-- > _ :: forall x. le iden (norm x) = True
-- > _ :: forall r x. norm (smull r x) = mul r (norm x)
-- > _ :: forall x y. le (norm (op x y)) (op (norm x) (norm y)) = True
class (PartialOrder r, AbelianMonoid r) => NormedVectorSpace r a where
  norm :: a -> a -> r
  {-# MINIMAL norm #-}

-- TODO This is rather a specific involution.
-- | > existence :: exists conj.
class Conjugate a where
  conj :: a -> a
  {-# MINIMAL conj #-}

-- | > existence :: exists imul.
-- > _ :: forall x y. imul x y = conj (imul y x)
-- > _ :: forall r x y. imul (smull r x) y = op r (imul x y)
-- > _ :: forall x y z. imul (op x y) z = op (imul x z) (imul y z)
-- > _ :: forall x. le iden (imul x x) = True
-- > _ :: forall x. eq iden (imul x x) = eq iden x
class (PartialOrder r, AbelianMonoid r, Conjugate r) => InnerProductSpace r a where
  imul :: a -> a -> r
  {-# MINIMAL imul #-}

-- TODO This module is all fuzzy and shit.

-- TODO AffineModule

-- TODO AffineSpace
