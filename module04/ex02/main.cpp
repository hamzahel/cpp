/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-ayac <hel-ayac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 00:20:28 by hel-ayac          #+#    #+#             */
/*   Updated: 2022/05/06 17:12:22 by hel-ayac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	// test ex02
	// Animal *a;
	
	// test cat class and deep copy 
	Cat cat;
	std::cout << "idea : " << cat.getBrain()->getIdea(3) << std::endl;
	Cat c(cat);

	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	
	std::cout << "idea : " << c.getBrain()->getIdea(3) << std::endl;
	c.getBrain()->setIdea("i just wanna know if something change or not!", 3);
	std::cout << "idea : " << c.getBrain()->getIdea(3) << std::endl;
	std::cout << "idea : " << cat.getBrain()->getIdea(3) << std::endl;
	// // test dog class and deep copy 
	Dog dog;
	std::cout << "idea : " << dog.getBrain()->getIdea(3) << std::endl;
	Dog d(dog);

	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	
	std::cout << "idea : " << d.getBrain()->getIdea(3) << std::endl;
	d.getBrain()->setIdea("i just wanna know if something change or not!", 3);
	std::cout << "idea : " << d.getBrain()->getIdea(3) << std::endl;
	std::cout << "idea : " << dog.getBrain()->getIdea(3) << std::endl;

	//test II
	int i = -1;
	const Animal *animal[100];
	while (++i < 50)
	{
		animal[i] = new Cat();
		std::cout << "index : " << i << std::endl;
		std::cout << "random cat idea : " << animal[i]->getBrain()->getIdea(i) << std::endl;	
	}
	while (++i < 100)
	{
		animal[i] = new Dog();
		std::cout << "index : " << i << std::endl;
		std::cout << "random dog idea : " << animal[i]->getBrain()->getIdea(i) << std::endl;
	}
	while (--i > -1)
	{
		std::cout << "index : " << i << std::endl;
		delete animal[i];
	}
	return (0);
}