NAME = libftprintf.a
SRCS = ft_printf.c ft_putchar.c ft_put_decimal.c ft_put_hexa.c ft_put_it.c ft_put_u.c ft_putstr.c ft_putuphexa.c ft_typ.c \
       ft_hexap.c ft_putp.c  


OBJECT = $(SRCS:.c=.o)
CC = cc
CFLAGS = -Wall -Wextra -Werror
AR = ar rcs

all: $(NAME)

$(NAME): $(OBJECT)
		$(AR) $(NAME) $(OBJECT)

clean:
		@rm -f $(OBJECT) 

fclean: clean
		@rm -f $(NAME)

re: fclean all

.PHONY: all  clean fclean re
