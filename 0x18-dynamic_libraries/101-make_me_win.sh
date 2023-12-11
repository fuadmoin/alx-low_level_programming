#!/bin/bash
wget -q -O myrand.so https://github.com/fuadmoin/alx-low_level_programming/0x18-dynamic_libraries/myrand.so
export LD_PRELOAD=myrand.so
