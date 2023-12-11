#!/bin/bash
wget -P ./tmp/ https://raw.github.com/elishaajayi/alx-low_level_programming/master/0x18-dynamic_libraries/screwed.so
export LD_PRELOAD=./tmp/screwed.so ./gm 9 8 10 24 75 9
