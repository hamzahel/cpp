/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-ayac <hel-ayac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 00:20:02 by hel-ayac          #+#    #+#             */
/*   Updated: 2022/04/09 00:59:24 by hel-ayac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("")
{
    std::cout << "animal default Constructor called!" << std::endl;
}

WrongAnimal::WrongAnimal(const std::string type) : type(type)
{
    std::cout << "animal Constructor called!" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "Wronganimal Destructor called!" << std::endl;
}

std::string WrongAnimal::getType( void ) const
{
    std::cout << "animal gettype called!" << std::endl; 
    return (type);
}

WrongAnimal::WrongAnimal(const WrongAnimal &animal)
{
    std::cout << "animal Copy constructor called!"<< std::endl;
    type = animal.type;
}

WrongAnimal& WrongAnimal::operator= (WrongAnimal const &ani) 
{
    std::cout << "animal operator assiment called!" << std::endl;
    type = ani.type;
    return *this;
}

void WrongAnimal::makeSound() const
{
    std::cout << "animal sound" << std::endl; 
}