MAIN=src/Solution

SRC = $(wildcard src/*.cpp)
OBJ = $(patsubst %.cpp, %.o, $(SRC))
CC = g++
GFLAGS = -ansi -Wall -pedantic-errors -Werror -g -lm
TEST_FOLDER=tests

$(MAIN): $(OBJ)
	@$(CC) $(GFLAGS) $(OBJ) -o $@

%.o: %.c
	@$(CC) $(GFLAGS) -c $< -o $@

clean:
	rm -f $(MAIN) *.o

test: $(MAIN)
	@set -e ; \
	for input in ./$(TEST_FOLDER)/inputs/*.txt; do \
		output=$$(echo $$input | sed -re 's/\.txt$$/.txt/' | sed -re 's/inputs/outputs/'| sed -re 's/input/output/') ;\
		res=$$(echo $$input | sed -re 's/\.txt$$/.res/' | sed -re 's/inputs/res/') ; \
		diff=$$(echo $$input | sed -re 's/\.txt$$/.diff/' | sed -re 's/inputs/diffs/') ; \
		mkdir -p "./$(TEST_FOLDER)/res" ;\
		mkdir -p "./$(TEST_FOLDER)/diffs" ;\
		echo ""; \
		echo "Test on $$input: " ; \
		./$(MAIN) < "$$input" > "$$res" ;\
		if git diff --no-index $$res $$output > $$diff; then \
			echo "OK" ;\
		else \
			echo "FAIL" ;\
		fi ;\
	done
