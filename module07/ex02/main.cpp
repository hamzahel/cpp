
#include "Array.hpp"

int		main()
{
	Array<char>		tab_char(6);
	Array<std::string>	str(6);
	Array<int>		tab_int(6);
	unsigned int	i;
	int		random;

	i = -1;
	std::cout << "----------string--------\n";
	std::cout << "str size: " << str.size() << std::endl;
	while (++i < str.size())
	{
		str[i] = i + 40;
		std::cout << "str[" << i << "] = " << str[i] << std::endl;
	}
	std::cout << "---------int-------\n";
	i = -1;
	std::cout << "tab_int size: " << tab_int.size() << std::endl;
	while (++i < tab_int.size())
	{
		tab_int[i] = i + 10;
		std::cout << "tab_int[" << i << "] = " << tab_int[i] << std::endl;
	}
	std::cout << "--------char----------\n";
	i = -1;
	std::cout << "tab_char size: " << tab_char.size() << std::endl;
	while (++i < tab_char.size())
	{
		tab_char[i] = i + 33;
		std::cout << "tab_char[" << i << "] = " << tab_char[i] << std::endl;
	}
	std::cout << "---------deep copying---------\n";
	{
		i = -1;
		Array<char>		tab_cp;
		
		tab_cp = tab_char;
		std::cout << "tab_cp size: " << tab_cp.size() << std::endl;
		while (++i < tab_cp.size())
			std::cout << "tab_cp[" << i << "] = " << tab_cp[i] << std::endl;
	}
	std::cout << "--------char---------\n";
	i = -1;
	while (++i < tab_char.size())
		std::cout << "tab_char[" << i << "] = " << tab_char[i] << std::endl;
	std::cout << "--------exception--------\n";
	try
	{
		srand (time(NULL));
		random = rand() % (tab_char.size() + 5);
		tab_char[random];
		std::cout << random << " is a Valid index!\ntab_char[" << random << "] = " << tab_char[random] << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << random << " is an " << e.what() << '\n';
	}
	return (0);
}