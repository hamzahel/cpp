# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hel-ayac <hel-ayac@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/02 22:00:26 by hel-ayac          #+#    #+#              #
#    Updated: 2022/04/02 22:00:27 by hel-ayac         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Zombie

CC = g++

CFLAGS = -Wall -Werror -Wextra -std=c++98

SRC_FILE = Zombie.cpp main.cpp

HEADER = Zombie.hpp

OBJ_FILE = $(SRC_FILE:.c=.o)

all : $(NAME)

%.o:%.c
	$(CC) $(CFLAGS)  -c $< -o $@

$(NAME) : $(OBJ_FILE)
	$(CC) $(CFLAGS) $(OBJ_FILE) -o $(NAME)

clean :
	rm -rf $(OBJ_FILE) 
	make clean -C $(LIBFT_MAKEFILE_PATH)

fclean : clean
	rm -rf $(NAME) $(LIBFT)

re : fclean all