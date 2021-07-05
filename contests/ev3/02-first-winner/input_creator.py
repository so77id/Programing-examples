import random
import string

IN_PATH='./tests/inputs/input{}.txt'
OUT_PATH='./tests/outputs/output{}.txt'
N_FILES=15
N_SIZE_OF_LIST_MAX=1000

DIVISOR_START=20
DIVISOR_STOP=10

def create_words(nwords, ans):
    letters = string.ascii_lowercase
    init = random.choice(letters)

    words = []
    for i in range(nwords):
        word = ''.join(random.choice(letters) for i in range(random.randrange(1, 10)))
        if ans:
            word = init+word
        words.append(word)

    return words
        

        

for i in range(N_FILES):
    nwords = random.randrange(1, (i+1)*10)
    ans = random.choice([1,1, 0])

    words = create_words(nwords, ans)

    print(ans)

    with open(IN_PATH.format(str(i).zfill(2)), 'w') as file:
        line = " ".join(words)
        file.write(f"{line}\n")

    with open(OUT_PATH.format(str(i).zfill(2)), 'w') as file:
        if ans:
            file.write("Verdadero\n")
        else:
            file.write("Falso\n")
        
