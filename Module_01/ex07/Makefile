NAME = replace
FLAGS = -Wall -Wextra -Werror
COMP =	clang++ $(FLAGS)
FILE =	main.cpp

all : $(NAME)

$(NAME):
	@$(COMP) $(FILE) -o $(NAME) 

clean:
	@rm -rf *.gch

fclean: clean
	@rm -rf $(NAME)

re: fclean all