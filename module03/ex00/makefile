# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hel-ayac <hel-ayac@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/28 03:13:07 by hel-ayac          #+#    #+#              #
#    Updated: 2022/04/29 02:00:04 by hel-ayac         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Clap

CC = clang++

CFLAGS = -Wall -Werror -Wextra -std=c++98

SRC_FILE = ClapTrap.cpp main.cpp

HEADER = ClapTrap.hpp

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