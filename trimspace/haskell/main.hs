-- run it with 
--    ghc main.hs -o main.exe
--    main.exe

module Main where

import qualified Data.Text as T

strip  = T.unpack . T.strip . T.pack

main = do 
  let s = " xx "
  let ret = strip s
  print ret