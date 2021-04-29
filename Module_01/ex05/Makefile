NAME = Brain

HEADER = Brain.hpp \
			Human.hpp

SRC = main.cpp\
		Brain.cpp\
		Human.cpp

OBJ = $(SRC:.cpp=.o)

CC = clang++ -std=c++98

RM = rm -rf

FLAGS = -Wall -Wextra -Werror


all: $(NAME) $(OBJ)
$(NAME): $(OBJ_DIR)$(OBJ)
	$(CC) $(OBJ) -o $(NAME) $(FLAGS)

%.o: %.cpp
	$(CC) -c $< -o $@ $(FLAGS)

clean:
	$(RM) $(OBJ_DIR)$(OBJ)

fclean:	clean
	@ rm -f $(NAME)

re:		fclean all

.PHONY: all clean fclean re bonus