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
    minv = -100
    maxv = 100

    numbers = [random.randrange(minv, maxv) for _ in range(4)]

    with open(IN_PATH.format(str(i).zfill(2)), 'w') as file:
        for n in numbers:
            file.write(f"{n}\n")

    with open(OUT_PATH.format(str(i).zfill(2)), 'w') as file:
        max = -100
        for n in numbers:
            if max < n:
                max = n

        file.write(f"{max}\n")
