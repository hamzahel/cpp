#include "Convert.hpp"

void	doubleConverter(const std::string& str)
{
	double	d;
	double	frac;
	int		i;

	i = 0;
	if (str[0] == '+' || str[0] == '-')
		i++;
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
	if (!handler(str, i))
		std::cerr << "int: Invalid argument!!" << std::endl;
	else
	{	
		d = static_cast<double>(stod(str));
		frac = d - stoi(str);
		std::cout << "double: " << d << (!(frac) ? ".0\n" : "\n");
	}
}

void	floatConverter(const std::string& str)
{
	float	f;
	int		i;
	float	frac;

	i = 0;
	if (str[0] == '+' || str[0] == '-')
		i++;
	if (!isdigit(str[i]))
	{
		if (isScientific(str))
			std::cout << "float: " << str << ((isScientific(str) == 2) ? "\n" : "f\n");
		else
			std::cout << "float: Invalid argument!!" << std::endl;
		return ;
	}
	if (!handler(str, i))
		std::cerr << "int: Invalid argument!!" << std::endl;
	else
	{	
		f = static_cast<float>(stof(str));
		frac = f - stoi(str);
		std::cout << "float: " << f << (!(frac) ? ".0f\n" : "f\n");
	}
}

void	intConverter(const std::string& str)
{
	int		i;

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
		std::cout << "int: " << static_cast<int>(stoi(str)) << std::endl;
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
			std::cerr << "char: Invalid argument!!" << std::endl;
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
