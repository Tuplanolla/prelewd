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

-- TODO This module is all fuzzy and shit.

-- TODO AffineModule

-- TODO AffineSpace

-- | > exists smull.
-- > forall r x y. smull r (add x y) = add (smull r x) (smull r y)
-- > forall r s x. smull (add r s) x = add (smull r x) (smull s x)
-- > forall r s x. smull (mul r s) x = smull r (smull s x)
-- > forall x. smull one x = x
class (Ring r, AbelianGroup a) => LeftModule r a where
  smull :: r -> a -> a
  {-# MINIMAL smull #-}

-- | > exists smulr.
-- > forall r x y. smulr (add x y) r = add (smulr x r) (smulr y r)
-- > forall r s x. smulr x (add r s) = add (smulr x r) (smulr x s)
-- > forall r s x. smulr x (mul r s) = smulr (smulr x s) r
-- > forall x. smulr x one = x
class (Ring r, AbelianGroup a) => RightModule r a where
  smulr :: a -> r -> a
  {-# MINIMAL smulr #-}

-- | > forall r x. smull r x = smulr x r
class (LeftModule r a, RightModule r a) => Module r a

-- |
type LeftVectorSpace r a = (Field r, LeftModule r a)

-- |
type RightVectorSpace r a = (Field r, RightModule r a)

-- |
type VectorSpace r a = (Field r, Module r a)

-- | > exists dist.
-- > forall x y. le iden (dist x y)
-- > forall x y. eq iden (dist x y) = eq x y
-- > forall x y. dist x y = dist y x
-- > forall x y z. le (dist x z) (op (dist x y) (dist y z))
--
-- There is one degree of redundancy in the laws.
class (PartialOrder r, AbelianMonoid r) => MetricSpace r a where
  dist :: a -> a -> r
  {-# MINIMAL dist #-}

-- | > exists norm.
-- > forall x. le iden (norm x)
-- > forall r x. norm (smull r x) = mul r (norm x)
-- > forall x y. le (norm (op x y)) (op (norm x) (norm y))
class (PartialOrder r, AbelianMonoid r) => NormedVectorSpace r a where
  norm :: a -> a -> r
  {-# MINIMAL norm #-}

-- TODO This is rather a specific involution.
-- | > exists conj.
class Conjugate a where
  conj :: a -> a
  {-# MINIMAL conj #-}

-- | > exists imul.
-- > forall x y. imul x y = conj (imul y x)
-- > forall r x y. imul (smull r x) y = op r (imul x y)
-- > forall x y z. imul (op x y) z = op (imul x z) (imul y z)
-- > forall x. le iden (imul x x)
-- > forall x. eq iden (imul x x) = eq iden x
class (PartialOrder r, AbelianMonoid r, Conjugate r) => InnerProductSpace r a where
  imul :: a -> a -> r
  {-# MINIMAL imul #-}
