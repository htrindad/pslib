NAME = pslib.a

SRC = ps_atol.c ps_split.c ps_strdup.c ps_strlen.c ps_substr.c ps_error.c ps_stackadd.c ps_stackfree.c

OBJ = $(SRC:.c=.o)

CFLAGS = -Wall -Werror -Wextra

all: $(NAME)

$(NAME): $(OBJ)
	ar -src $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
