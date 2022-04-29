/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamonTrap.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-ayac <hel-ayac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 02:01:11 by hel-ayac          #+#    #+#             */
/*   Updated: 2022/04/29 02:41:48 by hel-ayac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
	std::cout << "DiamondTrap: "<<this->name<<" default Constructor has been called" << std::endl;
}

DiamondTrap::DiamondTrap(const std::string& name) : ClapTrap(name + "_clap_name"),
	FragTrap(0), ScavTrap(0), name(name)
{
	std::cout << "DiamondTrap: "<<this->name<<"Constructor has been called" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& copy)
{
	std::cout << "DiamondTrap: "<<this->name<<" Copy Constrctor has been Called!!" << std::endl;
	this->name = copy.Name;
	this->hitPoints = copy.Hitpoints;
	this->energyPoints = copy.Energy_points;
	this->attackDamage = copy.Attack_damage;
}

DiamondTrap&	DiamondTrap::operator= (const DiamondTrap& copy)
{
	std::cout << "DiamondTrap:  "<< this->name <<" Assignation operator called!" << std::endl;
	if (this != &copy)
	{
		this->name = copy.name;
		this->hitPoints = copy.hitPoints;
		this->energyPoints = copy.energyPoints;
		this->attackDamage = copy.attackDamage;
	}
	return (*this);
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap: "<< this->name <<" Destructor has been called!!" << std::endl;
}

void	DiamondTrap::attack(std::string const& target)
{
	ScavTrap::attack(target);
}

void	DiamondTrap::whoAmI()
{
	std::cout << "DiamondTrap name is " << this->name << " , ClapTrap name is " << ClapTrap::Name << std::endl;
}