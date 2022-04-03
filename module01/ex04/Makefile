# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hel-ayac <hel-ayac@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/03 22:55:58 by hel-ayac          #+#    #+#              #
#    Updated: 2022/04/03 23:02:20 by hel-ayac         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = replace

CC = g++

CFLAGS = -Wall -Werror -Wextra -std=c++98

SRC_FILE = main.cpp

OBJ_FILE = $(SRC_FILE:.c=.o)

all : $(NAME)

%.o:%.c
	$(CC) $(CFLAGS)  -c $< -o $@

$(NAME) : $(OBJ_FILE)
	$(CC) $(CFLAGS) $(OBJ_FILE) -o $(NAME)

clean :
	rm -rf $(OBJ_FILE)

fclean : clean
	rm -rf $(NAME)

re : fclean all