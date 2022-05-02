/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceo <ceo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 03:50:04 by hel-ayac          #+#    #+#             */
/*   Updated: 2022/05/02 03:41:30 by ceo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    std::cout << "ClapTrap:: default constructor called" << std::endl;
}

ClapTrap::ClapTrap(const std::string& name):
    name(name),
    hitPoints(10),
    energyPoints(10),
    attackDamage(0)
{
    std::cout << "ClapTrap: " << this->name <<  " Constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& l):
    name(l.name),
    hitPoints(l.hitPoints),
    energyPoints(l.energyPoints),
    attackDamage(l.attackDamage)
{
    std::cout << "ClapTrap: "<< this->name << " copy constructor called " << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap: " << this->name <<" destructor called " << std::endl;
}

void ClapTrap::operator = (ClapTrap &l)
{
    std::cout <<"Claptrap: " << this->name << " Assignment operator called" << std::endl;
    name = l.name;
    hitPoints = l.hitPoints;
    energyPoints = l.energyPoints;
    attackDamage = l.attackDamage;
}

void ClapTrap::attack(const std::string& target)
{
    if(this->energyPoints > 0)
    {
        ClapTrap t(target);
        t.takeDamage(this->attackDamage);
        this->energyPoints--;
        std::cout << "ClapTrap: " << this->name << " attacks " << target
        << " , causing: " << this->attackDamage << " points of damage!" << std::endl;
        std::cout << "ClapTrap: " << this->name << " has " << this->energyPoints << " of energy point" <<std::endl;
    }
    else
        std::cout << "ClapTrap: " << this->name << " You need hit points to attack" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    std::cout << "ClapTrap: "<< this->name <<" is taking a damage of : "<< amount << std::endl;
    this->hitPoints -= amount;
    if (this->hitPoints <= 0)
    {
        std::cout << "ClapTrap: "<< this->name <<" is died!"<< amount << std::endl;
    }
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if(this->energyPoints > 0)
    {
        this->hitPoints += amount;
        this->energyPoints--;
        std::cout << "ClapTrap: " << this->name << " regains " << this->hitPoints << std::endl;
        std::cout << "ClapTrap: " << this->name << " has " << this->energyPoints << std::endl;
    }
    else   
        std::cout << "ClapTrap: " << this->name << "You need energy points to be repaired" << std::endl;
}

void ClapTrap::setName(std::string value)
{
    this->name = value;
}

std::string ClapTrap::getName(void)
{
    return this->name;
}

void ClapTrap::setEnergyPoint(int value)
{
    this->energyPoints = value;
}

int ClapTrap::getEnergyPoint(void)
{
    return this->energyPoints;
}

void ClapTrap::setAttackDamage(int value)
{
    this->attackDamage = value;
}

int ClapTrap::getAttackDamage(void)
{
    return this->attackDamage;
}

void ClapTrap::setHitPoint(int value)
{
    this->hitPoints = value;
}

int ClapTrap::getHitPoint(void)
{
    return this->hitPoints;
}

