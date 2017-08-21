{-# LANGUAGE NoImplicitPrelude #-}

-- | Group-like structures.
module Prelewd.GroupLike where

import Prelewd.Combinators

-- | This class comes with no laws.
class Magma a where
  op :: a -> a -> a

-- | This class comes with the following laws.
--
-- [/associativity/]
--
--      @forall x y z. op (op x y) z = op x (op y z)@
--
class Magma a => Semigroup a where

-- | This class comes with the following laws.
--
-- [/associativity/]
--
--      @forall x y z. op (op x y) z = op x (op y z)@
--
-- [/left identity/]
--
--      @forall x. op idenl x = x@
--
class Semigroup a => LeftMonoid a where
  idenl :: a

-- | This class comes with the following laws.
--
-- [/associativity/]
--
--      @forall x y z. op (op x y) z = op x (op y z)@
--
-- [/right identity/]
--
--      @forall x. op x idenr = x@
--
class Semigroup a => RightMonoid a where
  idenr :: a

-- | This class comes with the following laws.
--
-- [/associativity/]
--
--      @forall x y z. op (op x y) z = op x (op y z)@
--
-- [/left identity/]
--
--      @forall x. op idenl x = x@
--
-- [/right identity/]
--
--      @forall x. op x idenr = x@
--
class (LeftMonoid a, RightMonoid a) => Monoid a where
  iden :: a
  iden = other idenl idenr

-- | This class comes with the following laws.
--
-- [/associativity/]
--
--      @forall x y z. op (op x y) z = op x (op y z)@
--
-- [/left identity/]
--
--      @forall x. op idenl x = x@
--
-- [/right identity/]
--
--      @forall x. op x idenr = x@
--
-- [/symmetry/]
--
--      @forall x y. op x y = op y x@
--
class Monoid a => AbelianMonoid a where

-- | This class comes with the following laws.
--
-- [/associativity/]
--
--      @forall x y z. op (op x y) z = op x (op y z)@
--
-- [/left identity/]
--
--      @forall x. op idenl x = x@
--
-- [/left inverse/]
--
--      @forall x. op (invl x) x = idenl@
--
class LeftMonoid a => LeftGroup a where
  invl :: a -> a

-- | This class comes with the following laws.
--
-- [/associativity/]
--
--      @forall x y z. op (op x y) z = op x (op y z)@
--
-- [/right identity/]
--
--      @forall x. op x idenr = x@
--
-- [/right inverse/]
--
--      @forall x. op x (invr x) = idenr@
--
class RightMonoid a => RightGroup a where
  invr :: a -> a

-- | This class comes with the following laws.
--
-- [/associativity/]
--
--      @forall x y z. op (op x y) z = op x (op y z)@
--
-- [/left identity/]
--
--      @forall x. op idenl x = x@
--
-- [/right identity/]
--
--      @forall x. op x idenr = x@
--
-- [/left inverse/]
--
--      @forall x. op (invl x) x = idenl@
--
-- [/right inverse/]
--
--      @forall x. op x (invr x) = idenr@
--
class (LeftGroup a, RightGroup a) => Group a where
  inv :: a -> a
  inv = other invl invr

-- | This class comes with the following laws.
--
-- [/associativity/]
--
--      @forall x y z. op (op x y) z = op x (op y z)@
--
-- [/left identity/]
--
--      @forall x. op idenl x = x@
--
-- [/right identity/]
--
--      @forall x. op x idenr = x@
--
-- [/left inverse/]
--
--      @forall x. op (invl x) x = idenl@
--
-- [/right inverse/]
--
--      @forall x. op x (invr x) = idenr@
--
-- [/symmetry/]
--
--      @forall x y. op x y = op y x@
--
class (AbelianMonoid a, Group a) => AbelianGroup a where
