# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pscott <pscott@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/06 15:57:44 by pscott            #+#    #+#              #
#    Updated: 2018/11/07 10:13:28 by pscott           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
OBJ = main.o
CFLAGS = -Wall -Wextra -Werror
NAME = libft
DEPS = libft.h


all: $(NAME)

$(NAME): $(OBJ)
	$(CC) -o $@ $^

%.o: %.c $(DEPS)
	$(CC) -o $@ -c $< $(CFLAGS)

.PHONY: clean fclean re

clean:
	@/bin/rm -rf $(OBJ)

fclean: clean
	@/bin/rm -rf $(NAME)

re: fclean all
