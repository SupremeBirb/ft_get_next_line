# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lelee <lelee@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/08/10 12:46:48 by lelee             #+#    #+#              #
#    Updated: 2019/08/29 19:17:27 by lelee            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = get_next_line

CC = gcc

CFLAGS = -Wall -Wextra -Werror -g

SRC = get_next_line.c

all: $(NAME)

$(NAME): lib

# lib:
# 	@make -C libft
# 	@cp libft/libft.a .
# 	@echo "Library Copy Complete"
# #uses make command in library

# out:
# 	@$(CC) $(CFLAGS) $(SRC) libft.a -o gnl
# 	@echo "gnl Generation Complete"

clean:
	@rm -f $(OBJ)
	@make -C libft/ clean

fclean: clean
	@rm -f $(NAME)
	@rm -f libft.a
	@make -C libft/ fclean

re: fclean all

.PHONY: lib out clean all fclean re gnl