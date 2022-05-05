/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-ayac <hel-ayac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 00:20:34 by hel-ayac          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2022/05/05 12:32:21 by ceo              ###   ########.fr       */
=======
/*   Updated: 2022/05/04 15:07:33 by hel-ayac         ###   ########.fr       */
>>>>>>> dd631c85d9cbd5a8b930fce3f9a466276830078c
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
    type = dog.getType();
}

 Dog& Dog::operator= (const Dog& dog)
{
    std::cout << "dog operator assigment called!" << std::endl;
    type = dog.getType();
    delete this->brain;
    this->brain = dog->brain;
    return (*this);
}

void Dog::makeSound() const
{
    std::cout << "woof woof woof" << std::endl;
}