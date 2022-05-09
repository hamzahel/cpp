
#include "easyfind.hpp"

int		main()
{
	std::vector<int>	vect;
	int					length;
	int					i;

	i = -1;
	length = 5;
	while (++i < length)
		vect.push_back(i);
	try
	{
		easyfind(vect, 0);
		easyfind(vect, 4);
		easyfind(vect, 1);
		easyfind(vect, 5);
		easyfind(vect, 2);
	}
	catch(const std::exception& e){std::cerr << e.what() << '\n';}
	return (0);
}