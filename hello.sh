#!/bin/sh

mkdir -p build
cd build
cmake ..
if [ "$?" != "0" ]; then
	exit 1
fi
make
if [ "$?" != "0" ]; then
	exit 1
fi
ctest -V
if [ "$?" != "0" ]; then
	exit 1
fi
