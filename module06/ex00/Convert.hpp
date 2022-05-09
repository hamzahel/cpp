
#ifndef CONVERT_HPP
# define CONVERT_HPP

#include <iostream>
#include <string>

void	charConverter(const std::string& str);
void	intConverter(const std::string& str);
void	floatConverter(const std::string& str);
void	doubleConverter(const std::string& str);

//Checkers

int		isScientific(const std::string& str);
bool	checker(const std::string& str, int i);


#endif