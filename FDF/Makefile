# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nglynis <nglynis@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/01/18 07:02:26 by nglynis           #+#    #+#              #
#    Updated: 2020/01/24 07:46:20 by nglynis          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fdf
DEPS = *.h
DEPSDIR = includes
SRC = 	main.c\
		read_file.c\
		zoom.c\
		draw.c
SRCDIR = srcs
OBJ = $(SRC:.c=.o)
CC = /usr/bin/gcc
CCFLAGS = -Wall -Wextra -Werror
RM = /bin/rm
RMFLAGS = -f
LIB = ft
LIBDIR = $(SRCDIR)/libft

.PHONY: all clean fclean re

all: $(NAME)
$(NAME): $(OBJ)
	make -C $(LIBDIR)
	$(CC) $(CCFLAGS)  $(DEBUG) srcs/libft/libft.a minilibx_macos/libmlx.a  -o $(NAME) $^ -framework OpenGL -framework AppKit

$(OBJ): %.o : $(SRCDIR)/%.c $(DEPSDIR)/$(DEPS)
	$(CC) $(CCFLAGS) -I $(DEPSDIR) -I $(LIBDIR) $(DEBUG) -c -o $@ $<

$(SRCDIR)/$(SRC):

$(DEPSDIR)/$(DEPS):

clean:
	make -C $(LIBDIR) clean
	$(RM) $(RMFLAGS) $(OBJ)

fclean: clean
	make -C $(LIBDIR) fclean
	$(RM) $(RMFLAGS) $(NAME)

re: fclean all
