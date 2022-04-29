# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hel-ayac <hel-ayac@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/29 02:01:32 by hel-ayac          #+#    #+#              #
#    Updated: 2022/04/29 04:20:04 by hel-ayac         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Clap

CC = clang++

CFLAGS = -Wall -Werror -Wextra -std=c++98

SRC_FILE = ClapTrap.cpp main.cpp ScavTrap.cpp FragTrap.cpp DiamonTrap.cpp

HEADER = ClapTrap.hpp ScavTrap.hpp FragTrap.hpp DiamonTrap.hhp

OBJ_FILE = $(SRC_FILE:.cpp=.o)

all : $(NAME)

%.o:%.cpp
	$(CC) $(CFLAGS)  -c $< -o $@

$(NAME) : $(OBJ_FILE)
	$(CC) $(CFLAGS) $(OBJ_FILE) -o $(NAME)

clean :
	rm -rf $(OBJ_FILE)
	make clean -C $(LIBFT_MAKEFILE_PATH)

fclean : clean
	rm -rf $(NAME) $(LIBFT)

re : fclean all