#!/bin/python3

import math
import os
import random
import re
import sys


IN_PATH='./tests/inputs/input{}.txt'
OUT_PATH='./tests/outputs/output{}.txt'
N_FILES=15

for i in range(N_FILES):
    minv = 3
    maxv = 100

    x_i = random.randrange(minv, maxv/2)
    # print(x_i + i*5+1)
    x_j = random.randrange(x_i, x_i + i*5+1)

    # print(x_i, x_j)

    results = [ (x + pow(x - 1, 2))  for x in range(x_i, x_j+1)]
        

    with open(IN_PATH.format(str(i).zfill(2)), 'w') as file:
        file.write(f"{x_i} {x_j}\n")

    with open(OUT_PATH.format(str(i).zfill(2)), 'w') as file:
        for n in results:
            file.write(f"{n}\n")
