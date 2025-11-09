#!/bin/bash

g++ main/main.cpp src/*.cpp -o program;  # compile
./program;                          # run
rm -f program;                      # remove
