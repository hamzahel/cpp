# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hel-ayac <hel-ayac@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/23 02:45:07 by hel-ayac          #+#    #+#              #
#    Updated: 2022/04/23 02:53:55 by hel-ayac         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = harlFilter

CC = g++

CFLAGS = -Wall -Werror -Wextra -std=c++98

SRC_FILE = Harl.cpp main.cpp

HEADER = Harl.hpp

OBJ_FILE = $(SRC_FILE:.cpp=.o)

all : $(NAME)

%.o:%.cpp
	$(CC) $(CFLAGS)  -c $< -o $@

$(NAME) : $(OBJ_FILE)
	$(CC) $(CFLAGS) $(OBJ_FILE) -o $(NAME)

clean :
	rm -rf $(OBJ_FILE)

fclean : clean
	rm -rf $(NAME) $(LIBFT)

re : fclean all