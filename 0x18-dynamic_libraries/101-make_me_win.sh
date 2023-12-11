#!/bin/bash
wget -P ./tmp/ https://raw.github.com/elishaajayi/alx-low_level_programming/master/0x18-dynamic_libraries/screwed.so
export LD_PRELOAD=./tmp/screwed.so
