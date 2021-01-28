# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: asydykna <asydykna@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/01/26 13:13:58 by asydykna          #+#    #+#              #
#    Updated: 2021/01/28 19:59:54 by asydykna         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = ft_atoi.c	\
	ft_bzero.c	\
	ft_isalpha.c\
	ft_memccpy.c\
	ft_memchr.c\
	ft_memcmp.c\
	ft_memcpy.c\
	ft_memmove.c\
	ft_memset.c\
	ft_strchr.c\
	ft_strlcat.c\
	ft_strlcpy.c\
	ft_strlen.c\
	ft_strnstr.c\
	ft_strrchr.c

OBJ = $(SRC:.c=.o)

CC = gcc

RM = rm -f

CFLAGS = -Wall -Wextra -Werror

HDR = libft.h

all: $(NAME)

$(NAME): $(OBJ)
	# $(CC) $(CFLAGS) -I $(HDR) $(SRC) 
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

program:
	CC main.c $(NAME)
	
# delete later	
debug:
	CC -g main.c $(NAME)