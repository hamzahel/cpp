
#include "Convert.hpp"

int		main(int ac, char **av)
{
	if (ac == 2)
	{
		charConverter(av[1]);
		intConverter(av[1]);
		floatConverter(av[1]);
		doubleConverter(av[1]);
	}
	else
		std::cout << "Wrong number of arguments!!!\n";
	return (0);
}