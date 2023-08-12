CC = cc

FLAGS = -Wall -Wextra -Werror

NAME = libftprintf.a

SRC = ft_printf.c ft_putchar.c ft_putstr.c \
	check_type.c ft_putnbr.c ft_puthex.c \
	ft_putpointer.c

BONUS_SRC = ./bonus/ft_printf_bonus.c ./bonus/check_type_bonus.c \
			./bonus/ft_putchar_bonus.c ./bonus/ft_puthex_bonus.c \
			./bonus/ft_putnbr_bonus.c ./bonus/ft_putpointer_bonus.c \
			./bonus/ft_putstr_bonus.c

OBJ = $(SRC:.c=.o)

BONUS_OBJ = $(BONUS_SRC:.c=.o)

all: $(NAME)

bonus: $(BONUS_OBJ)

$(NAME): $(OBJ)

%.o: %.c
	$(CC) $(FLAGS) -c $< -o $@
	ar -rcs $(NAME) $@

clean:
	rm -f $(OBJ) $(BONUS_OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus
