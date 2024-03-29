/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-ayac <hel-ayac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 00:20:34 by hel-ayac          #+#    #+#             */
/*   Updated: 2022/05/06 16:16:28 by hel-ayac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
    std::cout << "dog constructer called!" << std::endl;
    this->brain = new Brain();
}

Dog::~Dog()
{
    delete this->brain;
    std::cout << "dog destructor called!" << std::endl;
}

Dog::Dog(const Dog& dog)
{
    std::cout << "dog copy constructor called!" << std::endl;
    this->brain = nullptr;
    type = dog.getType();
    *this = dog;
}

 Dog& Dog::operator= (const Dog& dog)
{
    std::cout << "dog operator assigment called!" << std::endl;
    delete this->brain;
    this->brain = new Brain();
    type = dog.getType();
    *(this->brain) = *(dog.brain);
    return (*this);
}

void	Dog::setBrain(Brain* b)
{
	this->brain = b;
}

Brain* 	Dog::getBrain(void) const
{
    return this->brain;
}

void Dog::makeSound() const
{
    std::cout << "woof woof woof" << std::endl;
}