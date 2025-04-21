#!/bin/bash
DKALGANO_TESTS_DIR="$HOME/printf-tests"
make > /dev/null
gcc $DKALGANO_TESTS_DIR/$1/main.c libftprintf.a -I "$DKALGANO_TESTS_DIR" -o test.out -Wall -Werror -Wextra
$(pwd)/./test.out
rm $(pwd)/./test.out
