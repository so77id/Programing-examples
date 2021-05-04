#!/bin/python3

import math
import os
import random
import re
import sys

types = {
    2: "isoseles",
    3: "escaleno"
}


points = {
    1: [[2,-2], [13,-2], [8, 3]],
    2: [[-1, -1], [3, -1], [1, 5]],
    3: [[-2, 1], [4, 2], [-3, 2]]
}
types_l = list(types.keys())

IN_PATH='./tests/inputs/input{}.txt'
OUT_PATH='./tests/outputs/output{}.txt'
N_FILES=15

for i in range(N_FILES):
    type = random.choice(types_l)
    delta = random.randint(-10, 10)

    tri = [[point[0]+delta, point[1]+delta] for point in points[type]]

    with open(IN_PATH.format(str(i).zfill(2)), 'w') as file:
        for point in tri:
            file.write(f"{point[0]} {point[1]}\n")

    with open(OUT_PATH.format(str(i).zfill(2)), 'w') as file:
        file.write(f"{types[type]}\n")
