/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-ayac <hel-ayac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 04:49:52 by hel-ayac          #+#    #+#             */
/*   Updated: 2022/05/04 13:04:44 by hel-ayac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	std::cout << "ScavTrap: default Constructor called" << std::endl;
}

ScavTrap::ScavTrap(const std::string& name) : ClapTrap(name)
{
	std::cout << "ScavTrap: "<<getName()<<" Constructor called!!" << std::endl;
	setAttackDamage(20);
	setEnergyPoint(50);
	setHitPoint(100);
}

ScavTrap::ScavTrap(ScavTrap& copy)
 {
	std::cout << "ScavTrap: "<< getName() <<" Copy Constrctor Called!!" << std::endl;
	setName(copy.getName());
	setAttackDamage(copy.getAttackDamage());
	setEnergyPoint(copy.getEnergyPoint());
	setHitPoint(copy.getHitPoint());
}

ScavTrap&	ScavTrap::operator= (ScavTrap& copy)
{
	std::cout << "ScavTrap: "<< getName()<<" Assignment operator called!" << std::endl;
	setName(copy.getName());
	setAttackDamage(copy.getAttackDamage());
	setEnergyPoint(copy.getEnergyPoint());
	setHitPoint(copy.getHitPoint());
	return (*this);
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap: "<< getName() <<" Destructor called!!" << std::endl;
}

void	ScavTrap::attack(std::string const& target)
{
	if(getEnergyPoint() > 0)
    {
        ScavTrap t(target);
        t.takeDamage(getAttackDamage());
		setEnergyPoint(getEnergyPoint() - 1);
        std::cout << "ScavTrap: " << getName() << " attacks " << target
        << " , causing: " << getAttackDamage() << " points of damage!" << std::endl;
        std::cout << "ScavTrap: " << getName() << " has " << getEnergyPoint() << " of energy point" <<std::endl;
    }
    else
        std::cout << "ScavTrap: " << getName() << " You need hit points to attack" << std::endl;
}

void	ScavTrap::guardGate()
{
	std::cout << "ScavTrap: " << getName()<< " enter to Gate keeper mode." << std::endl;
}