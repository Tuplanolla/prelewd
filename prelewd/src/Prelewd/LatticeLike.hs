{-# LANGUAGE ConstraintKinds #-}
{-# LANGUAGE NoImplicitPrelude #-}

-- | Lattice-like structures.
module Prelewd.LatticeLike (
  module Prelewd.LatticeLike) where

import Data.Bool ((&&), Bool, not)
import Prelewd.Combinators
import Prelewd.Types

-- | > forall x. eq x x
-- > forall x y. eq x y = eq y x
-- > forall x y z. eq x y && eq y z ==> eq x z
class Equality a where
  eq :: a -> a -> Bool
  {-# MINIMAL eq #-}

-- | > forall x. le x x
-- > forall x y. le x y && le y x = eq x y
-- > forall x y z. le x y && le y z ==> le x z
class Equality a => PartialOrder a where
  le :: a -> a -> Bool
  le x y = ge y x
  ge :: a -> a -> Bool
  ge x y = le y x
  lt :: a -> a -> Bool
  lt x y = le x y && not (eq x y)
  gt :: a -> a -> Bool
  gt x y = ge x y && not (eq x y)
  {-# MINIMAL le #-}

-- TODO MeetSemilattice

-- TODO JoinSemilattice

-- TODO Semilattice

-- TODO Lattice

-- TODO TotalOrder
