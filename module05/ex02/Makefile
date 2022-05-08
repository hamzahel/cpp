NAME = Form

CC = clang++

CFLAGS = -Wall -Werror -Wextra -std=c++98

SRC_FILE = Bureaucrat.cpp main.cpp Form.cpp PresidentialPardonForm.cpp \
			RobotomyRequestForm.cpp ShrubberyCreationForm.cpp

HEADER = Bureaucrat.hpp Form.hpp PresidentialPardonForm.hpp \
			RobotomyRequestForm.hpp ShrubberyCreationForm.hpp

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