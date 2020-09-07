#!/bin/bash
gcc -fPIC -Wall -Werror -Wextra -pedantic -shared -o liball.so *.c
