#!/bin/bash

source make_clean.sh
make gen_make
make ut 
cd test/ut/linux-linux-x86-debug-gnu-ut-bin/
