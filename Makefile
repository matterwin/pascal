CC = g++
FLAGS = -g -std=c++11
EXECUTABLE = cube.exe

.PHONY: all clean

all: $(EXECUTABLE)

$(EXECUTABLE): cube.o
	$(CC) $(FLAGS) $^ -o $@

cube.o: cube.cpp
	$(CC) $(FLAGS) -c $< -o $@

clean:
	rm -rf cube.o $(EXECUTABLE)
