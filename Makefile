# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: inunez-g <inunez-g@student.42urduliz.com>  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/09 12:15:22 by inunez-g          #+#    #+#              #
#    Updated: 2021/09/13 10:31:42 by inunez-g         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRC =	ft_printf.c\
		ft_print_funcs.c\
		ft_print_funcs2.c\

OBJS = $(SRC:.c=.o)

CC =	gcc

CFLAGS =	-Werror -Wextra -Wall

LIB =	ar rc

INCLUDES = ft_printf.h

all: $(NAME)

$(NAME):	$(OBJS) $(INCLUDES)
	make -C Libft
	cp Libft/libft.a .
	mv libft.a $(NAME)
	$(LIB) $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $(SRC)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
