{-# LANGUAGE ConstraintKinds #-}
{-# LANGUAGE NoImplicitPrelude #-}

-- | Group-like structures.
module Prelewd.GroupLike (
  module Prelewd.GroupLike) where

import Prelewd.Combinators

-- | > exists op.
class Magma a where
  op :: a -> a -> a
  {-# MINIMAL op #-}

-- | > forall x y z. op (op x y) z = op x (op y z)
--
-- This class is also known as `Associative`.
class Magma a => Semigroup a

-- | > forall x y. op x y = op y x
--
-- This class is also known as `Symmetric` or `Commutative`.
class Magma a => Abelian a

-- | > exists idenl.
-- > forall x. op idenl x = x
class Magma a => LeftUnital a where
  idenl :: a
  {-# MINIMAL idenl #-}

-- | > exists idenr.
-- > forall x. op x idenr = x
class Magma a => RightUnital a where
  idenr :: a
  {-# MINIMAL idenr #-}

-- | > exists iden.
-- > idenl = iden = idenr
--
-- This class is also known as `Identified` or `Pointed`.
class (LeftUnital a, RightUnital a) => Unital a where
  iden :: a
  iden = unamb idenl idenr
  {-# MINIMAL #-}

-- | > exists invl.
-- > forall x. op (invl x) x = iden
class Unital a => LeftInvertible a where
  invl :: a -> a
  {-# MINIMAL invl #-}

-- | > exists invr.
-- > forall x. op x (invr x) = iden
class Unital a => RightInvertible a where
  invr :: a -> a
  {-# MINIMAL invr #-}

-- | > exists inv.
-- > invl = inv = invr
class (LeftInvertible a, RightInvertible a) => Invertible a where
  inv :: a -> a
  inv = unamb invl invr
  {-# MINIMAL #-}

-- |
type Monoid a = (Unital a, Semigroup a)

-- |
type AbelianMonoid a = (Abelian a, Monoid a)

-- |
type Group a = (Invertible a, Monoid a)

-- |
type AbelianGroup a = (Abelian a, Group a)
