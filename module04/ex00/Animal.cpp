/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceo <ceo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 00:20:46 by hel-ayac          #+#    #+#             */
/*   Updated: 2022/05/05 12:51:16 by ceo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : type("")
{
    std::cout << "animal default Constructor called!" << std::endl;
}

Animal::Animal(const std::string type) : type(type)
{
    std::cout << "animal Constructor called!" << std::endl;
}

Animal::~Animal()
{
    std::cout << "animal Destructor called!" << std::endl;
}

std::string Animal::getType( void ) const
{
    std::cout << "animal gettype called!" << std::endl; 
    return (type);
}

Animal::Animal(const Animal &animal)
{
    std::cout << "animal Copy constructor called!"<< std::endl;
    type = animal.type;
}

const Animal& Animal::operator= (Animal const &ani) 
{
    std::cout << "animal operator assiment called!" << std::endl;
    type = ani.type;
    return (const Animal&)*this;
}

void Animal::makeSound() const
{
    std::cout << "animal sound" << std::endl; 
}