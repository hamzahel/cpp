#include "ClapTrap.hpp"

ClapTrap::ClapTrap(const std::string& name)
    name(name),
    hitPoints(10),
    energyPoints(10),
    attackDamage(0)
{
    std::count << "Constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& l)
    name(l.name),
    hitPoints(l.hitPoints),
    energyPoints(l.energyPoints),
    attackDamage(l.attackDamage)
{
    std::cout << "copy constructor called " << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "destructor called " << std::endl;
}

void ClapTrap::operator = (const ClapTrap &l)
{
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
        t.hitPoints -= this->attackDamage;
        this->energyPoints--;
        std::cout << "ClapTrap " << this->name << " attacks " << target << " , causing " << this->attackDamage << " points of damage!" << std::endl;
        std::cout << "ClapTrap " << this->name << " hit points is " << this->hitPoints << std::endl;
        std::cout << "ClapTrap " << target << " hit points is " << t.hitPoints << std::endl;
    }
    else
        std::cout << "You need hit points to attack" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    this->attackDamage += amount;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if(this->energyPoints > 0)
    {
        this->hitPoints += amount;
        this->energyPoints--;
        std::cout << "ClapTrap " << this->name << " regains " << this->hitPoints << std::endl;
        std::cout << "ClapTrap " << this->name << " has " << this->energyPoints << std::endl;
    }
    else   
        std::cout << "You need energy points to be repaired" << std::endl;
}