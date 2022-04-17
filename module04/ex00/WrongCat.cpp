/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-ayac <hel-ayac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 00:20:23 by hel-ayac          #+#    #+#             */
/*   Updated: 2022/04/09 00:47:56 by hel-ayac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("Cat")
{
    std::cout << "cat constructer called!" << std::endl;
}

WrongCat::~WrongCat()
{
    std::cout << "cat destructor called!" << std::endl;
}

WrongCat::WrongCat(const WrongCat& cat)
{
    std::cout << "Copy constructor called!" << std::endl;
    type = cat.type;
}

WrongCat& WrongCat::operator= (const WrongCat& cat)
{
    std::cout << "cat operator assiment called!" << std::endl;
    type = cat.type;
    return (*this);
}

void WrongCat::makeSound() const
{
    std::cout << "meaw meaw meaw" << std::endl;
}