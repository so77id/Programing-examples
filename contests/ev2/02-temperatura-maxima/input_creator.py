#!/bin/python3

import math
import os
import random
import re
import sys


IN_PATH='./tests/inputs/input{}.txt'
OUT_PATH='./tests/outputs/output{}.txt'
N_FILES=15

M_SIZE_MAX=1000
N_SIZE_MAX=255

N_WORDS=[1,2,2,3,3,4,4,5,5,5,5]
HEADERS=["SOL", "EDDYA", "INF", "TELECO"]

DIVISOR_START=100
DIVISOR_STOP= 10


for i in range(N_FILES):
    start = i*(M_SIZE_MAX//(DIVISOR_START * (N_FILES-i)))+1
    stop = (i+1)*(M_SIZE_MAX//(DIVISOR_STOP * (N_FILES-(i))))

    N = random.randrange(start, stop)
    temps = [random.randrange(1, 1000) for _ in range(N)]

    max = 0
    day = -1

    for j, t in enumerate(temps):
        if t >= max:
            max = t
            day = j

    with open(IN_PATH.format(str(i).zfill(2)), 'w') as file:
        for t in temps:
            file.write(f"{t}\n")
        file.write(f"{-1}\n")            

    with open(OUT_PATH.format(str(i).zfill(2)), 'w') as file:
        file.write(f"{max} {day}\n")            