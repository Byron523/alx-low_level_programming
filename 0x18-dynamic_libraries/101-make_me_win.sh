#!/bin/bash
wget -P /tmp/ https://raw.github.com/Byron523/alx-low_level_programming/master/0x18-dynamic_libraries/myrand.so
export LD_PRELOAD=/tmp/myrand.so
