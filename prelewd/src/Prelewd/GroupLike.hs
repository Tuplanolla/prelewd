{-# LANGUAGE NoImplicitPrelude #-}

-- | Group-like structures.
module Prelewd.GroupLike where

import Prelewd.Combinators

-- | > exists op.
class Magma a where
  op :: a -> a -> a

-- | Also known as `Associative`.
--
-- > forall x y z. op (op x y) z = op x (op y z)
class Magma a => Semigroup a where

-- | Also known as `Symmetric`.
--
-- > forall x y. op x y = op y x
class Magma a => Abelian a where

-- | > exists idenl. forall x. op idenl x = x
class Magma a => LeftIdentity a where
  idenl :: a

-- | > exists idenr. forall x. op x idenr = x
class Magma a => RightIdentity a where
  idenr :: a

-- | > exists invl. forall x. op (invl x) x = idenl
class LeftIdentity a => LeftInverse a where
  invl :: a -> a

-- | > exists invr. forall x. op x (invr x) = idenr
class RightIdentity a => RightInverse a where
  invr :: a -> a

-- | > exists iden. idenl = iden = idenr
class (Semigroup a, LeftIdentity a, RightIdentity a) => Monoid a where
  iden :: a
  iden = unamb idenl idenr

class (Monoid a, Abelian a) => AbelianMonoid a where

-- | > exists inv. invl = inv = invr
class (Monoid a, LeftInverse a, RightInverse a) => Group a where
  inv :: a -> a
  inv = unamb invl invr

class (Group a, Abelian a) => AbelianGroup a where
