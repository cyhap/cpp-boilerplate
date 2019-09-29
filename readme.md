# C++ Boilerplate
[![Build Status](https://travis-ci.org/Ip-umd/cpp-boilerplate.svg?branch=master)](https://travis-ci.org/Ip-umd/cpp-boilerplate)
[![Coverage Status](https://coveralls.io/repos/github/Ip-umd/cpp-boilerplate/badge.svg?branch=master)](https://coveralls.io/github/Ip-umd/cpp-boilerplate?branch=master)
---

## Part 1 Authors
Corbyn Yhap (Driver)
Charan-Karthikeyan (Navigator)

## Part 2 Authors
Ishan Patel (Driver)
Satyarth Praveen (Navigator)

## Overview

Simple demonstration of Test Driven Development.

## Standard install via command-line
```
git clone --recursive https://github.com/dpiet/cpp-boilerplate
cd <path to repository>
mkdir build
cd build
cmake ..
make
Run tests: ./test/cpp-test
Run program: ./app/shell-app
```

## Building for code coverage (for assignments beginning in Week 4)
```
sudo apt-get install lcov
cmake -D COVERAGE=ON -D CMAKE_BUILD_TYPE=Debug ../
make
make code_coverage
```
This generates a index.html page in the build/coverage sub-directory that can be viewed locally in a web browser.

## Group discussions summary
Discussion regarding build history:
There were no build errors in the part2 of the assignment after implementations.
So no major build related updates were needed.

Discussion regarding coverage history:
Coverage was 100% for this repository after a successful build. Coverage details are mentioned in the results repository.

Discussion regarding improved tests:
Currently the code base aligns with the class deisgn and is not complex enough for more test functions to be required.

But in case this project is extended to its greater functionality, i.e. tuning of gain parameters or update time units, 
there would be many more tests that would be needed to ensure the credibility of the program.

