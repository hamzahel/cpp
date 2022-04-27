# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ceo <ceo@student.42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/29 16:57:42 by hel-ayac          #+#    #+#              #
#    Updated: 2022/04/25 05:29:35 by ceo              ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Account

CC = clang++

CFLAGS = -Wall -Werror -Wextra -std=c++98

SRC_FILE = tests.cpp Account.cpp

HEADER = Account.hpp

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