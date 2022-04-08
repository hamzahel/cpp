NAME = Animal

CC = g++

CFLAGS = -Wall -Werror -Wextra -std=c++98

SRC_FILE = Animal.cpp main.cpp Cat.cpp Dog.cpp

HEADER = Animal.hpp Dog.hpp Cat.hpp

OBJ_FILE = $(SRC_FILE:.c=.o)

all : $(NAME)

%.o:%.c
	$(CC) $(CFLAGS)  -c $< -o $@

$(NAME) : $(OBJ_FILE)
	$(CC) $(CFLAGS) $(OBJ_FILE) -o $(NAME)

clean :
	rm -rf $(OBJ_FILE)

fclean : clean
	rm -rf $(NAME)

re : fclean all