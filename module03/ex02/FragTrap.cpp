/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-ayac <hel-ayac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 02:00:42 by hel-ayac          #+#    #+#             */
/*   Updated: 2022/04/29 02:22:08 by hel-ayac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	std::cout << "FragTrap: "<<this->name<<" default Constructor has been called" << std::endl;
}

FragTrap::FragTrap(const std::string& name) : ClapTrap(name)
{
	std::cout << "FragTrap:"<<this->name<<" Constructor has been called!!" << std::endl;
	this->hitPoints = 100;
	this->energyPoints = 100;
	this->attackDamage = 30;
}

FragTrap::FragTrap(const FragTrap& copy)
{
	std::cout << "FragTrap: " <<<this->name<" Copy Constrctor has been Called!!" << std::endl;
	*this = copy;
}

FragTrap&	FragTrap::operator= (const FragTrap& copy)
{
	std::cout << "FragTrap: "<< this->name <<" Assignation operator called!" << std::endl;
	this->Name = copy.Name;
	this->hitPoints = copy.Hitpoints;
	this->energyPoints = copy.Energy_points;
	this->attackDamage = copy.Attack_damage;
	return (*this);
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap: "<<this->name<<" Destructor has been called!!" << std::endl;
}

void	FragTrap::attack(std::string const& target)
{
	if(this->energyPoints > 0)
    {
        FragTrap t(target);
        t.takeDamage(this->attackDamage);
        this->energyPoints--;
        std::cout << "FragTrap: " << this->name << " attacks " << target
        << " , causing: " << this->attackDamage << " points of damage!" << std::endl;
        std::cout << "FragTrap: " << this->name << " has " << this->energyPoints << " of energy point" <<std::endl;
    }
    else
        std::cout << "FragTrap: " << this->name << " You need hit points to attack" << std::endl;
}

void	FragTrap::highFivesGuys()
{
	std::cout << "high fives!!" << std::endl;
}