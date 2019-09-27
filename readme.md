# C++ Boilerplate
[![Build Status](https://travis-ci.org/cyhap/cpp-boilerplate.svg?branch=ACME_PID)](https://travis-ci.org/cyhap/cpp-boilerplate)
[![Coverage Status](https://coveralls.io/repos/github/cyhap/cpp-boilerplate/badge.svg?branch=ACME_PID)](https://coveralls.io/github/cyhap/cpp-boilerplate?branch=ACME_PID)
---

## Part 1 Authors
Corbyn Yhap (Driver)
Charan-Karthikeyan (Navigator)

## Overview

Simple PID Controller and starter C++ project with:

- cmake
- googletest

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
