#!/bin/bash
wget -P /tmp/ https://raw.github.com/IZZYLOVE/alx-low_level_programming/master/0x18-dynamic_libraries/0x18.c/libtest.so
export LD_PRELOAD =/tmp/libtest.so
