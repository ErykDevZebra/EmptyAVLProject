#!/bin/bash

cmake .
cmake --build . --parallel $(nproc)
