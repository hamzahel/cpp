/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-ayac <hel-ayac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 23:39:20 by hel-ayac          #+#    #+#             */
/*   Updated: 2022/05/10 23:39:21 by hel-ayac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

void	doubleConverter(const std::string& str)
{
	double	d;
	int		i;
	int		is_handler;

	i = 0;
	
	if (str[0] == '+' || str[0] == '-')
		i++;
	is_handler = handler(str, i);
	if (!isdigit(str[i]))
	{
		if (isScientific(str) == 1)
			std::cout << "double: " << str << std::endl;
		else if (isScientific(str) == 2)
			std::cout << "double: " << str.substr(0, str.length() - 1) << std::endl;
		else
			std::cout << "double: Invalid argument!!" << std::endl;
		return ;
	}
	if (!is_handler)
		std::cerr << "int: Invalid argument!!" << std::endl;
	else
	{	
		d = static_cast<double>(stod(str));
		std::cout << "double: " << d << ((is_handler == 1) ? ".0\n" : "\n");
	}
}

void	floatConverter(const std::string& str)
{
	float	f;
	int		i;
	int		is_handler;

	i = 0;
	if (str[0] == '+' || str[0] == '-')
		i++;
	is_handler = handler(str, i);
	if (!isdigit(str[i]))
	{
		if (isScientific(str))
			std::cout << "float: " << str << ((isScientific(str) == 2) ? "\n" : "f\n");
		else
			std::cout << "float: Invalid argument!!" << std::endl;
		return ;
	}
	if (!is_handler)
		std::cerr << "int: Invalid argument!!" << std::endl;
	else
	{	
		f = static_cast<float>(stof(str));
		std::cout << "float: "  << std::fixed;
		std::cout << std::setprecision(1) << f << ((is_handler == 1) ? ".0f\n" : "f\n");
	}
}

void	intConverter(const std::string& str)
{
	int		i;
	int number;

	i = 0;
	if (str[0] == '+' || str[0] == '-')
		i++;
	if (!isdigit(str[i]))
	{
		if (isScientific(str))
			std::cout << "int: impossible" << std::endl;
		else
			std::cerr << "int: Invalid argument!!" << std::endl;
		return ;
	}
	if (!handler(str, i))
		std::cerr << "int: Invalid argument!!" << std::endl;
	else
	{
		number = stoi(str);
		std::cout << "int: " << number << std::endl;
	}
}

void	charConverter(const std::string& str)
{
	int		i;

	i = 0;
	if (str[0] == '+' || str[0] == '-')
		i++;
	if (!isdigit(str[i]))
	{
		if (str.length() == 1)
			std::cout << "char: '" << str[0] << "'" << std::endl;
		else if (isScientific(str))
			std::cout << "char: impossible" << std::endl;
		else
			std::cerr << "int: Invalid argument!!" << std::endl;
		return ;
	}
	if (!handler(str, i))
		std::cerr << "char: Invalid argument!!" << std::endl;
	else
	{
		if (stoi(str) >= 32 && stoi(str) <= 127)
			std::cout << "char: '" << static_cast<char>(stoi(str)) << "'" << std::endl;
		else
			std::cout << "char: Non displayable" << std::endl;
	}
}
