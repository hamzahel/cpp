/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceo <ceo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 00:20:28 by hel-ayac          #+#    #+#             */
/*   Updated: 2022/05/06 11:12:19 by ceo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	Cat cat;
	std::cout << "idea : " << cat.getBrain()->getIdea(3) << std::endl;
	Cat c(cat);
	// exit(0);
	std::cout << "idea : " << c.getBrain()->getIdea(3) << std::endl;
	// int i = -1;
	// const Animal *animal[100];
	// while (++i < 50)
	// {
	// 	animal[i] = new Cat();
	// 	std::cout << "index : " << i << std::endl;
	// 	std::cout << "random cat idea : " << animal[i]->getBrain()->getIdea(i) << std::endl;	
	// }
	// while (++i < 100)
	// {
	// 	animal[i] = new Dog();
	// 	std::cout << "index : " << i << std::endl;
	// 	std::cout << "random dog idea : " << animal[i]->getBrain()->getIdea(i) << std::endl;
	// }
	// while (--i > -1)
	// {
	// 	std::cout << "index : " << i << std::endl;
	// 	delete animal[i];
	// }
	return (0);
}