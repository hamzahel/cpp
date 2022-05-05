/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceo <ceo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 00:20:40 by hel-ayac          #+#    #+#             */
/*   Updated: 2022/05/05 12:32:54 by ceo              ###   ########.fr       */
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
    delete brain;
    std::cout << "cat destructor called!" << std::endl;
}

Cat::Cat(const Cat& cat)
{
    std::cout << "Copy constructor called!" << std::endl;
    type = cat.type;
    delete this->brain;
    this->brain = copy->brain;
}

Cat& Cat::operator= (const Cat& cat)
{
    std::cout << "cat operator assigment called!" << std::endl;
    delete this->brain;
    type = cat.type;
    this->brain = copy->brain;
    return (*this);
}

void	Cat::set_ideas(std::string idea, int i)
{
	if (i > 99)
		std::cout << "Wrong index!!" << std::endl;
	else
		brain->set_ideas(idea, i);
}

void	Cat::print_ideas(int i)
{
	if (i > 99)
		std::cout << "Wrong index!!" << std::endl;
	else
		std::cout << brain->get_ideas(i) << std::endl;
}

void Cat::makeSound() const
{
    std::cout << "meaw meaw meaw" << std::endl;
}