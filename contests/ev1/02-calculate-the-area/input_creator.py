#!/bin/python3

import math
import os
import random
import re
import sys


IN_PATH='./tests/input/input{}.txt'
OUT_PATH='./tests/output/output{}.txt'
N_FILES=15

types = [0, 1, 2]
# 0 -> triangle
# 1 -> circle
# 2 -> square


for i in range(N_FILES):
    type = random.choice(types)

    with open(IN_PATH.format(str(i).zfill(2)), 'w') as file:
        file.write(f"{type}\n")
        if type == 0:
            base = random.randint(1, 10)
            height = random.randint(1, 10)
            file.write(f"{base} {height}\n")
            area = (base * height)/2
        elif type == 1:
            radio = random.randint(1, 10)
            area = 3.14 * pow(radio, 2)
            file.write(f"{radio}\n")
        else:
            sq = random.randint(1, 10)
            file.write(f"{sq}\n")
            area = sq*sq


    with open(OUT_PATH.format(str(i).zfill(2)), 'w') as file:
        file.write(f"{area}\n")
