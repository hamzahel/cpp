# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hel-ayac <hel-ayac@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/29 14:56:04 by hel-ayac          #+#    #+#              #
#    Updated: 2022/03/29 17:02:38 by hel-ayac         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = PhoneBook

CC = g++

CFLAGS = -Wall -Werror -Wextra -std=c++98

SRC_FILE = PhoneBook.cpp

HEADER = PhoneBook.hpp

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