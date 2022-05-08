/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-ayac <hel-ayac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/08 17:06:41 by hel-ayac          #+#    #+#             */
/*   Updated: 2022/05/08 22:05:53 by hel-ayac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(int ac , char **av)
{
	if (ac != 3)
		return (1);
	try
	{
		std::cout << std::endl << "intial bureaucrat" << std::endl;
		Bureaucrat	bureaucrat(av[1], std::stoi(av[2]));
		std::cout << bureaucrat;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
		return (1);
	}
	// decrement 
	try
	{
		std::cout << std::endl << "decrement bureaucrat" << std::endl;
		Bureaucrat	bureaucrat(av[1], std::stoi(av[2]));
		std::cout << bureaucrat;
		bureaucrat.decrement();
		std::cout << bureaucrat;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
		return (1);
	}
	// increment 
	try
	{
		std::cout << std::endl << "increment bureaucrat" << std::endl;
		Bureaucrat	bureaucrat(av[1], std::stoi(av[2]));
		std::cout << bureaucrat;
		bureaucrat.increment();
		std::cout << bureaucrat;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
		return (1);
	}
	return (0);
}