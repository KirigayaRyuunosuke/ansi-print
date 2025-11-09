#!/bin/bash

g++ main/example.cpp src/*.cpp -o example;
./example;
rm -f example;
