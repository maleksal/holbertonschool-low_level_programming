#!/bin/bash
wget -q -O /tmp/inject.so https://github.com/maleksal/holbertonschool-low_level_programming/raw/master/0x18-dynamic_libraries/Giga%20Millions/inject.so
export LD_PRELOAD=/tmp/inject.so
