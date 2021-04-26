NAME = megaphone
CC = g++
FILES = megaphone
FLAGS = -Wall -Wextra -Werror -static

SRC_FILES = $(addsuffix .cpp, $(FILES))

all: $(NAME)

$(NAME): $(SRC_FILES)
	$(CC) $(SRC_FILES) -o $(NAME) $(FLAGS)

clean:
	rm -f $(NAME)

re: clean all

.PHONY: all clean