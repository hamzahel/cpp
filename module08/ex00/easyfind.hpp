
#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>
#include <string>
#include <exception>
#include <vector>
#include <algorithm>

class notFound : public std::exception
{
	public:
		const char* what() const throw(){return (" value not found on this container!!");}
};

template <typename T>
void	easyfind(T temp, int find)
{
	std::vector<int>::iterator		it;

	it = std::find(temp.begin(), temp.end(), find);
	std::cout << find;
	if (it != temp.end())
		std::cout << " value found on this container!!\n";
	else
		throw notFound();
}

#endif