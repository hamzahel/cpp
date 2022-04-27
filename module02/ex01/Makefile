# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hel-ayac <hel-ayac@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/04 20:42:05 by hel-ayac          #+#    #+#              #
#    Updated: 2022/04/23 20:13:54 by hel-ayac         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = Fixed

CC = clang++

CFLAGS = -Wall -Werror -Wextra -std=c++98

SRC_FILE = Fixed.cpp main.cpp

HEADER = Fixed.hpp

OBJ_FILE = $(SRC_FILE:.cpp=.o)

all : $(NAME)

%.o:%.cpp
	$(CC) $(CFLAGS)  -c $< -o $@

$(NAME) : $(OBJ_FILE)
	$(CC) $(CFLAGS) $(OBJ_FILE) -o $(NAME)

clean :
	rm -rf $(OBJ_FILE)

fclean : clean
	rm -rf $(NAME)

re : fclean all