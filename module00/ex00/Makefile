# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hel-ayac <hel-ayac@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/28 20:58:28 by hel-ayac          #+#    #+#              #
#    Updated: 2022/03/28 20:58:29 by hel-ayac         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone

CC = g++

CFLAGS = -Wall -Werror -Wextra -std=c++98

SRC_FILE = megaphone.cpp


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