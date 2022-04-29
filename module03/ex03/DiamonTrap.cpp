/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamonTrap.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-ayac <hel-ayac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 02:01:11 by hel-ayac          #+#    #+#             */
/*   Updated: 2022/04/29 03:36:52 by hel-ayac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
	std::cout << "DiamondTrap: "<< this->name <<" default Constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(const std::string& name) : ClapTrap(name + "_clap_name"),
	FragTrap(0), ScavTrap(0), name(name)
{
	std::cout << "DiamondTrap: "<< this->name <<" Constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& copy)
{
	std::cout << "DiamondTrap: "<< this->name <<" Copy Constrctor Called!!" << std::endl;
	this->name = copy.Name;
	this->hitPoints = copy.hitPoints;
	this->energyPoints = copy.energyPoints;
	this->attackDamage = copy.attackDamage;
}

DiamondTrap&	DiamondTrap::operator= (const DiamondTrap& copy)
{
	std::cout << "DiamondTrap:  "<< this->name <<" Assignation operator called!" << std::endl;
	this->name = copy.name;
	this->hitPoints = copy.hitPoints;
	this->energyPoints = copy.energyPoints;
	this->attackDamage = copy.attackDamage;
	return (*this);
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap: "<< this->name <<" Destructor called!!" << std::endl;
}

void	DiamondTrap::attack(std::string const& target)
{
	ScavTrap::attack(target);
}

void	DiamondTrap::whoAmI()
{
	std::cout << "DiamondTrap name is " << this->name << " , ClapTrap name is " << ClapTrap::name << std::endl;
}