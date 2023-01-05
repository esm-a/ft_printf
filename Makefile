CC := cc
CFLAGS := -Wall -Werror -Wextra

AR := ar rc
RM := rm -f

NAME := libftprintf.a
HEADER := ft_printf.h

SRCS := ft_printf.c	\
	ft_handle.c		\
	ft_sublibft.c
OBJS = $(SRCS:%.c=%.o)

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $@ $^

$(OBJS): $(HEADER)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all
