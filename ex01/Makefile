all: *.cpp *.hpp
	clang++ -Wall -Wextra -Werror -std=c++98 -g3 -I. *.cpp -o phonebook

run: all
	./phonebook

clean:
	rm -f phonebook

.PHONY: all clean run
