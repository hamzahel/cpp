# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hel-ayac <hel-ayac@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/11 20:33:11 by hel-ayac          #+#    #+#              #
#    Updated: 2022/05/11 20:33:46 by hel-ayac         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Span

CC = clang++

CFLAGS = -Wall -Werror -Wextra -std=c++98

SRC_FILE = main.cpp 

HEADER = Span.hpp

OBJ_FILE = $(SRC_FILE:.cpp=.o)

all : $(NAME)

%.o:%.cpp $(HEADER)
	$(CC) $(CFLAGS)  -c $< -o $@ -I $(HEADER)

$(NAME) : $(OBJ_FILE) $(HEADER)
	$(CC) $(CFLAGS) $(OBJ_FILE) -o $(NAME)

clean :
	rm -rf $(OBJ_FILE)

fclean : clean
	rm -rf $(NAME)

re : fclean all