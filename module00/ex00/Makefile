# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hel-ayac <hel-ayac@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/28 20:58:28 by hel-ayac          #+#    #+#              #
#    Updated: 2022/04/17 21:33:04 by hel-ayac         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone

CC = clang++

CFLAGS = -Wall -Werror -Wextra -std=c++98

SRC_FILE = megaphone.cpp

OBJ_FILE = $(SRC_FILE:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJ_FILE)
	$(CC) $(CFLAGS) $(OBJ_FILE) -o $(NAME)

clean :
	rm -rf $(OBJ_FILE)

fclean : clean
	rm -rf $(NAME)

re : fclean all