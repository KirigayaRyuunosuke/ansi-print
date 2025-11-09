#!/bin/bash

g++ example.cpp src/*.cpp -o example;
./example;
rm -f example;
