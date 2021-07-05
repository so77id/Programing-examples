import random

IN_PATH='./tests/inputs/input{}.txt'
OUT_PATH='./tests/outputs/output{}.txt'
N_FILES=15
N_SIZE_OF_LIST_MAX=1000

DIVISOR_START=20
DIVISOR_STOP=10

def create_list(n):
    return [random.randrange(1, 40) for i in range(n)]

def sol(l):
    s1 = []
    s2 = []
    for i in range(len(l)):
        # print("i:", i)
        right = left = 0
        for j in range(i+1, len(l)):
            right += 1
            if l[i] < l[j]:
                break

        
        for j in range(i-1, -1, -1):
            # print("\tj:", j)
            left += 1
            if l[i] < l[j]:
                break
        
        s1.append(right)
        s2.append(left)
    
    return s1, s2
        

for i in range(N_FILES):
    minv = i*(N_SIZE_OF_LIST_MAX//(DIVISOR_START * (N_FILES-i)))+1
    maxv = (i+1)*(N_SIZE_OF_LIST_MAX//(DIVISOR_STOP * (N_FILES-(i))))+1

    n = random.randrange(minv, maxv)

    l = create_list(n)
    s1, s2 = sol(l)
    
    print(n)

    with open(IN_PATH.format(str(i).zfill(2)), 'w') as file:
        file.write(f"{len(l)}\n")
        for e in l:
            file.write(f"{e}\n")

    with open(OUT_PATH.format(str(i).zfill(2)), 'w') as file:
        file.write(" ".join([str(s) for s in s1]) + "\n")
        file.write(" ".join([str(s) for s in s2]) + "\n")
        
