CC = cc

FLAGS = -Wall -Wextra -Werror

NAME = libftprintf.a

SRC = ./src/ft_printf.c ./src/ft_putchar.c ./src/ft_putstr.c \
	./src/check_type.c ./src/ft_putnbr.c ./src/ft_puthex.c

INCLUDE = ./include/ft_printf.h

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	@ar rcs $@ $^

%.o: %.c
	@$(CC) $(FLAGS) -c $< -I $(INCLUDE) -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
