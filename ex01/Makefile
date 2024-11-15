CC = g++
CFLAGS = -Wall -Wextra -Werror -std=c++98 -g3

SRC_DIR = .
OBJ_DIR = obj
INC_DIR = -I.

SRC = $(wildcard $(SRC_DIR)/*.cpp)
OBJ = $(SRC:$(SRC_DIR)/%.cpp=$(OBJ_DIR)/%.o)
INC = $(wildcard $(SRC_DIR)/*.hpp)
EXE = phonebook

all: $(EXE)

$(EXE): $(OBJ)
	$(CC) $(CFLAGS) $^ -o $@

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp $(INC)
	@mkdir -p $(OBJ_DIR)
	$(CC) $(CFLAGS) $(INC_DIR) -c $< -o $@

run: all
	./$(EXE)

clean:
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -f $(EXE)

re: fclean all

.PHONY: all run clean fclean re
