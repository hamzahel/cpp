/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-ayac <hel-ayac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 00:20:28 by hel-ayac          #+#    #+#             */
/*   Updated: 2022/05/05 17:28:09 by hel-ayac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	int i = 0;
	const Animal *animal[100];
	while (i > 50)
	{
		animal[i] = new Cat();
	}
	while (i > 100)
	{
		animal[i] = new Dog();
	}
	return (0);
}