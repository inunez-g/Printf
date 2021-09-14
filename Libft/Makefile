# **************************************************************************** #
#                                                                              #
#                                                           :::      ::::::::  #
#  Makefile                                               :+:      :+:    :+:  #
#                                                       +:+ +:+         +:+    #
#  By: inunez-g <inunez-g@student.42urduliz.com>      +#+  +:+       +#+       #
#                                                   +#+#+#+#+#+   +#+          #
#  Created: 2021/07/22 18:07:30 by inunez-g              #+#    #+#            #
#  Updated: 2021/09/02 11:23:54 by inunez-g             ###   ########.fr      #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC =	ft_isalpha.c\
		ft_isdigit.c\
		ft_isalnum.c\
		ft_isascii.c\
		ft_isprint.c\
        ft_toupper.c\
        ft_tolower.c\
		ft_memset.c\
		ft_bzero.c\
		ft_memcpy.c\
		ft_memmove.c\
		ft_memchr.c\
		ft_memcmp.c\
		ft_strlcpy.c\
		ft_strlcat.c\
		ft_strrchr.c\
		ft_strncmp.c\
		ft_strlen.c\
		ft_strchr.c\
		ft_strnstr.c\
		ft_atoi.c\
		ft_calloc.c\
		ft_strdup.c\
		ft_substr.c\
		ft_strjoin.c\
		ft_strtrim.c\
		ft_split.c\
		ft_itoa.c\
		ft_strmapi.c\
		ft_striteri.c\
		ft_putchar_fd.c\
		ft_putstr_fd.c\
		ft_putendl_fd.c\
		ft_putnbr_fd.c\
		

B_SRC =	ft_lstnew.c\
		ft_lstadd_front.c\
		ft_lstsize.c\
		ft_lstlast.c\
		ft_lstadd_back.c\
		ft_lstdelone.c\
		ft_lstclear.c\
		ft_lstiter.c\
		ft_lstmap.c\

OBJS =	$(SRC:.c=.o)

B_OBJS = $(B_SRC:.c=.o)

CC =	gcc

CFLAGS =	-Werror -Wextra -Wall

LIB = 	ar rc



all: $(NAME)

$(NAME):	$(OBJS)
	$(LIB) $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c $(SRC) $(B_SRC)

bonus: $(B_OBJS)
	$(LIB) $(NAME) $^



clean:
	rm -f $(OBJS) $(B_OBJS)

fclean:	clean
	rm -f $(NAME)

re:	fclean all

.PHONY:	all clean fclean re bonus
