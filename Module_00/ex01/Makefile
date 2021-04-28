NAME = phonebook
CC = g++
INC_DIR = includes/
INCLUDES = -I$(INC_DIR)
FILES = crappybook\
		crappybook_utils
FLAGS = -static #-Wall -Wextra -Werror 

SRC_FILES = $(addsuffix .cpp, $(FILES))

all: $(NAME)

$(NAME): $(SRC_FILES)
	$(CC) $(SRC_FILES) $(INCLUDES) -o $(NAME) $(FLAGS)

clean:
	rm -f $(NAME)

re: clean all

.PHONY: all clean