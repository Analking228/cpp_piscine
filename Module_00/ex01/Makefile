NAME = phonebook

HEADER = crappybook.hpp\
			contact.class.hpp

SRC = crappybook.cpp\
		crappybook_utils.cpp\
		contact.class.cpp

OBJ = $(SRC:.cpp=.o)

CC = clang++ -std=c++98

RM = rm -rf

FLAGS = #-Wall -Wextra -Werror


all: $(NAME)
$(NAME): $(OBJ)
	$(CC) $(OBJ) -o $(NAME) $(FLAGS)

%.o: %.cpp
	$(CC) -c $< -o $@ $(FLAGS)

clean:
	$(RM) $(OBJ)

fclean:	clean
	@ rm -f $(NAME)

re:		fclean all

.PHONY: all clean fclean re bonus