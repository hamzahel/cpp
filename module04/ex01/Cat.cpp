/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-ayac <hel-ayac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 00:20:40 by hel-ayac          #+#    #+#             */
/*   Updated: 2022/05/05 15:46:11 by hel-ayac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
    std::cout << "cat constructer called!" << std::endl;
    this->brain = new Brain();
}

Cat::~Cat()
{
    delete this->brain;
    std::cout << "cat destructor called!" << std::endl;
}

Cat::Cat(const Cat& cat)
{
    std::cout << "Copy constructor called!" << std::endl;
    type = cat.getType();
    delete this->brain;
    this->brain = cat->brain;
}

Cat& Cat::operator= (const Cat& cat)
{
    std::cout << "cat operator assigment called!" << std::endl;
    delete this->brain;
    type = cat.getType();
    this->brain = copy->brain;
    return (*this);
}

void	Cat::setBrain(const Brain* b)
{
	this->brain = b;
}

Brain* 	Cat::getBrain(void) const
{
    return this->brain;
}

void Cat::makeSound() const
{
    std::cout << "meaw meaw meaw" << std::endl;
}