/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceo <ceo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 00:20:34 by hel-ayac          #+#    #+#             */
/*   Updated: 2022/05/04 06:18:32 by ceo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
    std::cout << "dog constructer called!" << std::endl;
}

Dog::~Dog()
{
    std::cout << "dog destructor called!" << std::endl;
}

Dog::Dog(const Dog& dog)
{
    std::cout << "dog copy constructor called!" << std::endl;
    type = dog.getType();
}

 Dog& Dog::operator= (const Dog& dog)
{
    std::cout << "dog operator assigment called!" << std::endl;
    type = dog.getType();
    return (*this);
}

void Dog::makeSound() const
{
    std::cout << "woof woof woof" << std::endl;
}