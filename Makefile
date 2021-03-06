# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jchauvet <jchauvet@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/14 12:02:53 by jchauvet          #+#    #+#              #
#    Updated: 2019/10/14 12:55:34 by jchauvet         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = ft_atoi.c ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c \
      ft_isdigit.c ft_isprint.c \
      ft_itoa.c ft_calloc.c\
      ft_memccpy.c ft_memchr.c ft_memcpy.c ft_memcmp.c\
      ft_memmove.c ft_memset.c ft_putchar_fd.c \
      ft_putendl_fd.c ft_putnbr_fd.c \
      ft_putstr_fd.c ft_split.c ft_strchr.c\
      ft_strdup.c\
      ft_strjoin.c ft_strlcat.c ft_strlcpy.c ft_strlen.c \
      ft_strmapi.c ft_strncmp.c\
      ft_strnstr.c ft_strrchr.c \
      ft_strtrim.c ft_substr.c ft_tolower.c ft_toupper.c \

OBJ = $(subst .c,.o,$(SRC))

CFLAGS = -Wall -Werror -Wextra

all: $(NAME)

$(NAME):
	gcc $(CFLAGS) -c $(SRC)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: clean fclean all re
