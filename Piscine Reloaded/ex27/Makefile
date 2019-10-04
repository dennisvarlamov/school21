# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nglynis <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/06 22:57:25 by nglynis           #+#    #+#              #
#    Updated: 2019/09/07 15:07:56 by nglynis          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file
SRC = srcs/ft_main.c

HEADERS = ./includes/ft.h
all: $(NAME)

$(NAME):
	gcc -Wextra -Wall -Werror $(SRC) -o $(NAME)
clean:
	/bin/rm -f *.o
fclean: clean
	/bin/rm -f $(NAME)
re: fclean all
