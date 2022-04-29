/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-ayac <hel-ayac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 02:01:37 by hel-ayac          #+#    #+#             */
/*   Updated: 2022/04/29 04:22:17 by hel-ayac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	std::cout << "ScavTrap: default Constructor called" << std::endl;
}

ScavTrap::ScavTrap(const std::string& name) : ClapTrap(name),
{
	std::cout << "ScavTrap Constructor called!!" << std::endl;
	hitPoints = 100;
	energyPoints = 50;
	attackDamage = 20;
}

ScavTrap::ScavTrap(const ScavTrap& copy)
{
	std::cout << "ScavTrap: "<< this->name <<" Copy Constrctor Called!!" << std::endl;
	this->name = copy->name;
	this->attackDamage = copy.attackDamage;
	this->energyPoints = copy.energyPoints;
	this->hitPoints = copy.hitPoints;
}

ScavTrap&	ScavTrap::operator= (const ScavTrap& copy)
{
	std::cout << "ScavTrap: "<< this->name<<" Assignment operator called!" << std::endl;
	this->name = copy.name;
	this->hitPoints = copy.hitPoints;
	this->energyPoints = copy.energyPoints;
	this->attackDamage = copy.attackDamage;
	return (*this);
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap: "<< this->name <<" Destructor called!!" << std::endl;
}

void	ScavTrap::attack(std::string const& target)
{
	if(this->energyPoints > 0)
    {
        ScavTrap t(target);
        t.takeDamage(this->attackDamage);
        this->energyPoints--;
        std::cout << "ScavTrap: " << this->name << " attacks " << target
        << " , causing: " << this->attackDamage << " points of damage!" << std::endl;
        std::cout << "ScavTrap: " << this->name << " has " << this->energyPoints << " of energy point" <<std::endl;
    }
    else
        std::cout << "ScavTrap: " << this->name << " You need hit points to attack" << std::endl;
}

void	ScavTrap::guardGate()
{
	std::cout << "ScavTrap: " <<this->name<< " enter to Gate keeper mode." << std::endl;
}