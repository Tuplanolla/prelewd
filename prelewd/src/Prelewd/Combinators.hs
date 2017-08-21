{-# LANGUAGE NoImplicitPrelude #-}

-- | Combinators.
module Prelewd.Combinators where

-- | Choose one or the other.
other :: a -> a -> a
other _ x = x
