
#ifndef CONVERT_HPP
# define CONVERT_HPP

#include <iostream>
#include <string>
#include <exception>
#include <iomanip>

class OutOfRangeException: public std::exception
{
    public:
        const char* what() const throw();
};

void	charConverter(const std::string& str);
void	intConverter(const std::string& str);
void	floatConverter(const std::string& str);
void	doubleConverter(const std::string& str);

//Checkers

int		isScientific(const std::string& str);
int 	handler(const std::string& str, int i);
int     ft_stoi(std::string str);

#endif