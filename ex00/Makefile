CC = g++
CFLAGS = -Wall -Wextra -Werror -Wpedantic -std=c++98

SRC = megaphone.cpp

EXE = megaphone

all: $(EXE)

$(EXE): $(SRC)
	$(CC) $(CFLAGS) $(SRC) -o $(EXE)

run: all
	./$(EXE)

clean:
	rm -f $(EXE)

re: clean all

.PHONY: all run clean re
