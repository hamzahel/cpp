/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceo <ceo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 02:01:11 by hel-ayac          #+#    #+#             */
/*   Updated: 2022/05/03 04:45:25 by ceo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "DiamondTrap.hpp"
#include "ClapTrap.hpp"

DiamondTrap::DiamondTrap()
{
	std::cout << "DiamondTrap: default Constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(const std::string& name) : ClapTrap(name + "_clap_name"),
	FragTrap(name), ScavTrap(name), name(name)
{
	std::cout << "DiamondTrap: "<< this->getName() <<" Constructor called" << std::endl;
	setAttackDamage(FragTrap::getAttackDamage());
	setHitPoint(FragTrap::getHitPoint());
	setEnergyPoint(ScavTrap::getEnergyPoint());
}

DiamondTrap::DiamondTrap(DiamondTrap& copy)
{
	std::cout << "DiamondTrap: "<< this->getName() <<" Copy Constrctor Called" << std::endl;
	setName(copy.getName());
	setAttackDamage(copy.getAttackDamage());
	setEnergyPoint(copy.getEnergyPoint());
	setHitPoint(copy.getHitPoint());
}

DiamondTrap&	DiamondTrap::operator= (DiamondTrap& copy)
{
	std::cout << "DiamondTrap:  "<< this->getName() <<" Assignation operator called" << std::endl;
	setName(copy.getName());
	setAttackDamage(copy.getAttackDamage());
	setEnergyPoint(copy.getEnergyPoint());
	setHitPoint(copy.getHitPoint());
	return (*this);
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap: "<< this->getName() <<" Destructor called" << std::endl;
}

void	DiamondTrap::attack(std::string const& target)
{
	ScavTrap::attack(target);
}

void	DiamondTrap::whoAmI()
{
	std::cout << "DiamondTrap name is " << this->getName() << " , ClapTrap name is " << ClapTrap::getName() << std::endl;
}