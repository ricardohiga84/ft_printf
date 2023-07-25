CC = cc

FLAGS = -Wall -Wextra -Werror

NAME = libftprintf.a

SRC = ./src/ft_printf.c ./src/ft_putchar.c ./src/ft_putstr.c \
		./src/check_type.c ./src/ft_putnbr.c ./src/ft_puthex.c \
		./src/ft_putpointer.c


INCLUDE = ./include

OBJ = $(SRC:.c=.o)

SRC_BONUS = ./bonus/ft_printf_bonus.c ./bonus/ft_putchar_bonus.c \
			./bonus/ft_putstr_bonus.c ./bonus/check_type_bonus.c \
			./bonus/ft_putnbr_bonus.c ./bonus/ft_puthex_bonus.c \
			./bonus/ft_putpointer_bonus.c

OBJ_BONUS = $(SRC_BONUS:.c=.o)

all: $(NAME)

bonus: $(OBJ_BONUS)
	ar rcs $(NAME) $^

$(NAME): $(OBJ)
	ar rcs $@ $^

%.o: %.c
	$(CC) $(FLAGS) -c $< -I $(INCLUDE) -o $@

clean:
	rm -f $(OBJ) $(OBJ_BONUS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus
