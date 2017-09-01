{-# LANGUAGE NoImplicitPrelude #-}

-- | Types.
module Prelewd.Types (
  module Data.Monoid,
  module Data.Semigroup,
  module Prelewd.Types) where

import Data.Bool (Bool (..))
import Data.Monoid (Product (..), Sum (..))
import Data.Semigroup (Max (..), Min (..))

-- | Material implication.
implies :: Bool -> Bool -> Bool
implies False _ = True
implies True y = y

-- | See `implies`.
(==>) :: Bool -> Bool -> Bool
(==>) = implies
infixr 4 ==>

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

-- | Left inverse of `fmap` for `Min`.
unliftMin :: (Min a -> Min b) -> a -> b
unliftMin f x = getMin (f (Min x))

-- | Left inverse of `liftA2` for `Min`.
unliftMin2 :: (Min a -> Min b -> Min c) -> a -> b -> c
unliftMin2 f x y = getMin (f (Min x) (Min y))

-- | Left inverse of `fmap` for `Max`.
unliftMax :: (Max a -> Max b) -> a -> b
unliftMax f x = getMax (f (Max x))

-- | Left inverse of `liftA2` for `Max`.
unliftMax2 :: (Max a -> Max b -> Max c) -> a -> b -> c
unliftMax2 f x y = getMax (f (Max x) (Max y))
