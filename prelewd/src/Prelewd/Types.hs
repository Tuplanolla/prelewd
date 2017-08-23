{-# LANGUAGE NoImplicitPrelude #-}

-- | Types.
module Prelewd.Types (
  module Data.Monoid,
  module Prelewd.Types) where

import Data.Monoid (Product (..), Sum (..))

-- | Left inverse of `fmap` for `Sum`.
unliftSum :: (Sum a -> Sum b) -> a -> b
unliftSum f x = getSum (f (Sum x))

-- | Left inverse of `liftA2` for `Sum`.
unliftSum2 :: (Sum a -> Sum b -> Sum c) -> a -> b -> c
unliftSum2 f x y = getSum (f (Sum x) (Sum y))

-- | Left inverse of `fmap` for `Product`.
unliftProduct :: (Product a -> Product b) -> a -> b
unliftProduct f x = getProduct (f (Product x))

-- | Left inverse of `liftA2` for `Product`.
unliftProduct2 :: (Product a -> Product b -> Product c) -> a -> b -> c
unliftProduct2 f x y = getProduct (f (Product x) (Product y))
