#!/bin/bash
gcc -wall -wextra -werror -pedantic -c -fPIC program_test.c
gcc -shared -o liball.so .program_test.c
export LD_LIBRARY_PATH=.:$ LD_LIBRARY_PATH
