#!/bin/zsh
TESTS_DIR=$PWD
TESTS_FILE=$TESTS_DIR/tests.out
echo "alias dkalgano-printf-tests='make -C $TESTS_DIR PROJECT_DIR=\$PWD && $TESTS_FILE'" >> ~/.zshrc
