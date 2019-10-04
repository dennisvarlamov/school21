# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nglynis <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/08/12 20:36:38 by nglynis           #+#    #+#              #
#    Updated: 2019/09/08 18:27:31 by nglynis          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRC = ./srcs/ft_putchar.c ./srcs/ft_strcmp.c ./srcs/ft_swap.c ./srcs/ft_putstr.c ./srcs/ft_strlen.c
OBJECTS = ft_putchar.o ft_putstr.o ft_strcmp.o ft_swap.o ft_strlen.o

HEADERS = ./includes/*.h

all: $(NAME)

$(NAME):
	gcc -Wextra -Wall -Werror -c $(SRC) -I $(HEADERS)
	ar rc $(NAME) $(OBJECTS)
	ranlib libft.a
clean:
	/bin/rm -f $(OBJECTS)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
