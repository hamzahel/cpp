/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-ayac <hel-ayac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 22:00:15 by hel-ayac          #+#    #+#             */
/*   Updated: 2022/04/02 23:31:36 by hel-ayac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"


Zombie::Zombie(){}

Zombie::Zombie(std::string name){
    this->name = name;
}
Zombie::~Zombie(void)
{
    
    // this->announce();
    // delete(this);
    delete[] this;
}

void Zombie::setName(std::string name)
{
    this->name = name;
}

std::string Zombie::getName()
{
    return this->name;
}

void Zombie::announce( void )
{
    std::cout << getName() << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie* Zombie::newZombie(std::string name)
{
    Zombie *z = new Zombie(name);
    return (z);
}

void Zombie::randomChump(std::string name)
{
    Zombie z(name);
    z.announce();
}