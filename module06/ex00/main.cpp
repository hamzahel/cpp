/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-ayac <hel-ayac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 23:39:30 by hel-ayac          #+#    #+#             */
/*   Updated: 2022/05/10 23:39:31 by hel-ayac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Convert.hpp"

int		main(int ac, char **av)
{
	if (ac == 2)
	{
		try {
			charConverter(av[1]);
		}catch(const std::exception& e)
		{
			std::cerr << "char: impossible" << std::endl;
		}

		try {
			intConverter(av[1]);
		}catch(const std::exception& e)
		{
			std::cerr << "int: impossible"  <<std::endl;
		}

		try {
			floatConverter(av[1]);
		}catch(const std::exception& e)
		{
			std::cerr << "float: impossible" << std::endl;
		}

		try {
			doubleConverter(av[1]);
		}catch(const std::exception& e)
		{
			std::cerr << "double: impossible" << std::endl;
		}
	}
	else
		std::cout << "Wrong number of arguments!!!\n";
	return (0);
}