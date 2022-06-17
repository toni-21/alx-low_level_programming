#!/bin/bash
gcc *.c -shared -o 100-operations.so -fPIC
export LD_LIBRARY_PATH=$PWD:$LD_LIBRARY_PATH
