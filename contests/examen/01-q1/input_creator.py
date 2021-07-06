import random
from queue import PriorityQueue

IN_PATH='./tests/inputs/input{}.txt'
OUT_PATH_1='./tests/outputs_1/output{}.txt'
OUT_PATH_2='./tests/outputs_2/output{}.txt'
N_FILES=15



def ranking3(roulette):
    def comparer(x, y):
        return x[0]-y[1]

    arr = [[x,y] for (x,y) in zip(roulette, [i for i in range(len(roulette))])]
    arr  = sorted(arr, key=lambda x: (x[0], -x[1]), reverse=True)
    
    return arr[:3]

def notAppear(roulette):
    l = []
    for i,r in enumerate(roulette):
        if r == 0:
            l.append(i)
    
    return l
    
for i in range(N_FILES):
    roulette = [random.randrange(0, 10) for i in range(37)]
    
    rank3 = [x[1] for x in ranking3(roulette)]
    l = notAppear(roulette)
    n = random.randrange(0, 37)
    
    with open(IN_PATH.format(str(i).zfill(2)), 'w') as file:
        for e in roulette:
            file.write(f"{e}\n")

    with open(OUT_PATH_1.format(str(i).zfill(2)), 'w') as file:
        # s = " ".join([str(i) for i in rank3])
        for s in rank3:
            file.write(f"{s}\n")

    with open(OUT_PATH_2.format(str(i).zfill(2)), 'w') as file:
        for s in l:
            file.write(f"{s}\n")
