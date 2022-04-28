/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-ayac <hel-ayac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 04:49:52 by hel-ayac          #+#    #+#             */
/*   Updated: 2022/04/28 04:54:07 by hel-ayac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	std::cout << "ScavTrap: " << this->name <<"default Constructor called" << std::endl;
}

ScavTrap::ScavTrap(const std::string& name) : ClapTrap(name)
{
	std::cout << "ScavTrap Constructor called!!" << std::endl;
	Hitpoints = 100;
	Energy_points = 50;
	Attack_damage = 20;
}

ScavTrap::ScavTrap(const ScavTrap& copy)
{
	std::cout << "ScavTrap: "<< this->name <<" Copy Constrctor Called!!" << std::endl;
	*this = copy;
}

ScavTrap&	ScavTrap::operator= (const ScavTrap& copy)
{
	std::cout << "ScavTrap: "<< this->name<<" Assignment operator called!" << std::endl;
	if (this != &copy)
	{
		this->Name = copy.Name;
		this->Hitpoints = copy.Hitpoints;
		this->Energy_points = copy.Energy_points;
		this->Attack_damage = copy.Attack_damage;
	}
	return (*this);
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap: "<< this->name <<" Destructor called!!" << std::endl;
}

void	ScavTrap::attack(std::string const& target)
{
	std::cout << "ScavTrap: " << this->name << " attack " << target << ", causing " << Attack_damage << " points of damage!" << std::endl;
}

void	ScavTrap::guardGate()
{
	std::cout << "ScavTrap: "<<this->name<<" has entered in Gate keeper mode." << std::endl;
}