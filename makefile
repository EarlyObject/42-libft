# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: asydykna <asydykna@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/01/26 13:13:58 by asydykna          #+#    #+#              #
#    Updated: 2021/01/26 18:46:09 by asydykna         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = ft_bzero.c ft_memccpy.c ft_memcpy.c ft_memmove.c ft_memset.c ft_strlcpy.c ft_strlen.c

OBJ = $(SRC:.c=.o)

CC = gcc

RM = rm -f

CFLAGS = -Wall -Wextra -Werror

HDR = libft.h

all: $(NAME)

$(NAME): $(OBJ)
	# $(CC) $(CFLAGS) -I $(HDR) $(SRC) 
	ar rc $(NAME) $(OBJ)

clean:
	$(RM) $(OBJ)

fclean:
	$(RM) $(NAME)

# re =
program:
	CC main.c $(NAME)
	