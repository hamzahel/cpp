/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceo <ceo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 02:00:42 by hel-ayac          #+#    #+#             */
/*   Updated: 2022/05/02 06:37:57 by ceo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	std::cout << "FragTrap: default Constructor called" << std::endl;
}

FragTrap::FragTrap(const std::string& name) : ClapTrap(name)
{
	std::cout << "FragTrap:"<< getName() <<" Constructor called!!" << std::endl;
	setAttackDamage(30);
	setEnergyPoint(100);
	setHitPoint(100);
}

FragTrap::FragTrap(FragTrap& copy)
{
	std::cout << "FragTrap: " << getName() <<" Copy Constrctor Called!!" << std::endl;
	setName(copy.getName());
	setAttackDamage(copy.getAttackDamage());
	setEnergyPoint(copy.getEnergyPoint());
	setHitPoint(copy.getHitPoint());
}

FragTrap&	FragTrap::operator= (FragTrap& copy)
{
	std::cout << "FragTrap: "<< getName() <<" Assignation operator called!" << std::endl;
	setName(copy.getName());
	setAttackDamage(copy.getAttackDamage());
	setEnergyPoint(copy.getEnergyPoint());
	setHitPoint(copy.getHitPoint());
	return (*this);
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap: "<<getName()<<" Destructor called!!" << std::endl;
}

void	FragTrap::attack(std::string const& target)
{
	if(getEnergyPoint() > 0)
    {
        FragTrap t(target);
        t.takeDamage(getAttackDamage());
        setEnergyPoint(getEnergyPoint() - 1);
        std::cout << "FragTrap: " << getName() << " attacks " << target
        << " , causing: " << getAttackDamage() << " points of damage!" << std::endl;
        std::cout << "FragTrap: " << getName() << " has " << getEnergyPoint() << " of energy point" <<std::endl;
    }
    else
        std::cout << "FragTrap: " << getName() << " You need hit points to attack" << std::endl;
}

void	FragTrap::highFivesGuys()
{
	std::cout << "high fives!!" << std::endl;
}