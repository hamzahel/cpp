#include "iter.hpp"

int		main()
{
	int		arr[] = {5, 9, 7, 8, 1, 2};
	char	str[] = {'y', 'o', 'u', 'n', 'e', 's'};
	Awesome	tab[5];
	
	iter<int>(arr, 6, print);
	std::cout << "\n";
	iter<char>(str, 6, print);
	std::cout << "\n";
	iter<Awesome>(tab, 5, print);
	std::cout << "\n";
	
	return (0);
}