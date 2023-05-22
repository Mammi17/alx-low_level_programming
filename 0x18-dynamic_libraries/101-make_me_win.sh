#!/bin/bash
wget -P /tmp/ https://raw.github.com/Mammi17/alx-low_level_programming/master/0x18-dynamic_libraries/notion.so
export LD_PRELOAD=/tmp/notion.so
