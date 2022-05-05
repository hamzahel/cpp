NAME = Animal

CC = clang++

CFLAGS = -Wall -Werror -Wextra -std=c++98

SRC_FILE = Animal.cpp main.cpp Cat.cpp Dog.cpp\
			Brain.cpp

HEADER = Animal.hpp Dog.hpp Cat.hpp Brain.hpp

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