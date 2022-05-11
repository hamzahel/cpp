# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hel-ayac <hel-ayac@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/10 23:39:15 by hel-ayac          #+#    #+#              #
#    Updated: 2022/05/10 23:39:16 by hel-ayac         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Serialization

CC = clang++

CFLAGS = -Wall -Werror -Wextra -std=c++98

SRC_FILE = main.cpp


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