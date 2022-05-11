/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-ayac <hel-ayac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 04:16:02 by hel-ayac          #+#    #+#             */
/*   Updated: 2022/05/11 04:16:03 by hel-ayac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>
#include <string>

template <typename T>
void	print(const T& element)
{
	std::cout << element << " ";
}

template <typename T>
void	iter(T *arr, int length, void (*func)(const T& element))
{
	int		i;

	i = -1;
	while (++i < length)
		func(arr[i]);
}

class Test
{
	private:
		std::string	name;
	public:
		Test(void) : name("kamal") {}
		std::string		getName(void) const {return this->name;}
};

std::ostream& operator<<(std::ostream& out, Test const& test)
{
	out << test.getName();
	return out;
}


#endif