#!/bin/bash
wget -P /tmp https://github.com/milelogan/alx-low_level_programming/raw/master/0x18-dynamic_libraries/putshack.s
export LD_PRELOAD=/tmp/putshack.so
