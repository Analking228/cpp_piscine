NAME = phonebook
CC = g++
FLAGS = -static #-Wall -Wextra -Werror

FILES = crappybook

SRC_FILES = $(addsuffix .cpp, $(FILES))

all: $(NAME)

$(NAME): $(SRC_FILES)
	$(CC) $(SRC_FILES) -o $(NAME) $(FLAGS)

clean:
	rm -f $(NAME)

re: clean all

.PHONY: all clean