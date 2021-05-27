NAME = identify
CFLAGS = -Wall -Wextra -Werror

SRC = identify.cpp Base.class.cpp A.class.cpp B.class.cpp C.class.cpp

OBJ = $(patsubst %.cpp,%.o,$(SRC))



all: $(NAME)
$(NAME): $(OBJ)
	@clang++ $(OBJ) -o $(NAME)

%.o: %.c $(HEADER)
	@clang++ $(CFLAGS) -c $< -o $@

clean:
	@rm -f $(OBJ)

fclean:	clean
	@rm -f $(NAME)

re:		fclean all

.PHONY: all clean fclean re