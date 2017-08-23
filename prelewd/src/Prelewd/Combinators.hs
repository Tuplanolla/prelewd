{-# LANGUAGE NoImplicitPrelude #-}

-- | Combinators.
module Prelewd.Combinators (
  module Prelewd.Combinators) where

-- | Unambiguous choice for when the value does not matter.
unamb :: a -> a -> a
unamb _ x = x
