{-# LANGUAGE ConstraintKinds #-}
{-# LANGUAGE NoImplicitPrelude #-}

-- | Group-like structures.
module Prelewd.GroupLike (
  module Prelewd.GroupLike) where

import Prelewd.Combinators

-- TODO What to do with these?
{-
-- | >
class Functional a where
  fun :: a -> a
  {-# MINIMAL fun #-}

-- | > idempotency :: forall x. fun (fun x) = fun x
class Functional a => Idempotent a where
  {-# MINIMAL #-}
-}

-- | >
class Magma a where
  op :: a -> a -> a
  {-# MINIMAL op #-}

-- | > idempotency :: forall x. op x x = x
class Magma a => Idempotent a where
  {-# MINIMAL #-}

-- | > symmetry :: forall x y. op x y = op y x
--
-- This class is also known as `Symmetric` or `Commutative`.
class Magma a => Abelian a where
  {-# MINIMAL #-}

-- | > associativity :: forall x y z. op (op x y) z = op x (op y z)
--
-- This class is also known as `Associative`.
class Magma a => Semigroup a where
  {-# MINIMAL #-}

-- | This type is also known as `IdempotentSemigroup`.
type Band a = (Idempotent a, Semigroup a)

-- | > leftIdentity :: forall x. op idenl x = x
class Magma a => LeftUnital a where
  idenl :: a
  {-# MINIMAL idenl #-}

-- | > rightIdentity :: forall x. op x idenr = x
class Magma a => RightUnital a where
  idenr :: a
  {-# MINIMAL idenr #-}

-- | > identity :: idenl = iden = idenr
--
-- This class is also known as `Identified` or `Pointed`.
class (LeftUnital a, RightUnital a) => Unital a where
  iden :: a
  iden = unamb idenl idenr
  {-# MINIMAL #-}

-- | > leftInverse :: forall x. op (invl x) x = iden
class Unital a => LeftInvertible a where
  invl :: a -> a
  {-# MINIMAL invl #-}

-- | > rightInverse :: forall x. op x (invr x) = iden
class Unital a => RightInvertible a where
  invr :: a -> a
  {-# MINIMAL invr #-}

-- | > inverse :: forall x. invl x = inv x = invr x
class (LeftInvertible a, RightInvertible a) => Invertible a where
  inv :: a -> a
  inv = unamb invl invr
  {-# MINIMAL #-}

-- | >
type Monoid a = (Unital a, Semigroup a)

-- | >
type AbelianMonoid a = (Abelian a, Monoid a)

-- | >
type Group a = (Invertible a, Monoid a)

-- | >
type AbelianGroup a = (Abelian a, Group a)
