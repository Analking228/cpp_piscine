NAME = replace
PPFLAG = -Wall -Wextra -Werror
COMP =	clang++ $(PPFLAG)
FILE =	main.cpp

all : $(NAME)

$(NAME):
	@$(COMP) $(FILE) -o $(NAME)

clean:
	@rm -rf *.gch

fclean: clean
	@rm -rf $(NAME)

re: fclean all