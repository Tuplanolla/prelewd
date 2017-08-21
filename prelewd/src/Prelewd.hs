{-# LANGUAGE NoImplicitPrelude #-}

-- | Fun prelude.
module Prelewd (
  module Prelewd.Combinators,
  module Prelewd.GroupLike) where

import Prelewd.Combinators
import Prelewd.GroupLike

-- class (Monoid (Sum a), Monoid (Product a)) => Ring a

{-
(+) :: Ring a => a -> a -> a
x + y = getSum (Sum x <> Sum y)

zero :: Ring a => a
zero = getSum mempty

(*) :: Ring a => a -> a -> a
x * y = getProduct (Product x <> Product y)

one :: Ring a => a
one = getProduct mempty
-}
