/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceo <ceo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 00:20:40 by hel-ayac          #+#    #+#             */
/*   Updated: 2022/05/06 11:11:58 by ceo              ###   ########.fr       */
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
    // this->brain = nullptr;
    type = cat.getType();
    this->brain = cat.brain;
}

const Cat& Cat::operator= (const Cat& cat)
{
    std::cout << "cat operator assigment called!" << std::endl;
    type = cat.getType();
    this->brain = cat.brain;
    return (*this);
}

void	Cat::setBrain(Brain* b)
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