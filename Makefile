SRC = ft_hex.c \
		ft_pointer.c \
		ft_printf.c \
		ft_putchr.c \
		ft_putnbr.c \
		ft_putstr.c \
		ft_unsigned_nbr.c \

OBJ = $(SRC:c=o)

CC = cc 

CFLAGS = -Wall -Werror -Wextra

NAME = libftprintf.a

all: $(NAME)

$(NAME): $(OBJ)
	ar -rcs $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all