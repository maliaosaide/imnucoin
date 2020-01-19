#!/bin/bash
# create multiresolution windows icon
ICON_SRC=../../src/qt/res/icons/imnucoin.png
ICON_DST=../../src/qt/res/icons/imnucoin.ico
convert ${ICON_SRC} -resize 16x16 imnucoin-16.png
convert ${ICON_SRC} -resize 32x32 imnucoin-32.png
convert ${ICON_SRC} -resize 48x48 imnucoin-48.png
convert imnucoin-16.png imnucoin-32.png imnucoin-48.png ${ICON_DST}

