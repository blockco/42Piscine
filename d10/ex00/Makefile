# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rpassafa <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/07/25 10:54:54 by rpassafa          #+#    #+#              #
#    Updated: 2016/07/25 10:54:57 by rpassafa         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c srcs/ft_strlen.c \
 srcs/ft_swap.c

HEADER_DIR = ./includes

all: comp

comp:
	gcc -c -Wall -Wextra -Werror $(SRC) -I $(HEADER_DIR)
	ar rc $(NAME) ft_putchar.o ft_swap.o ft_strlen.o ft_strcmp.o ft_putstr.o
	ranlib $(NAME)

clean:
	rm -f ft_putchar.o ft_swap.o ft_strlen.o ft_strcmp.o ft_putstr.o

fclean: clean
	rm -f $(NAME)

re: fclean all
