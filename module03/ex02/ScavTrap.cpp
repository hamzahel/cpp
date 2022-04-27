
#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	std::cout << "ScavTrap default Constructor has been called" << std::endl;
}

ScavTrap::ScavTrap(const std::string& name) : ClapTrap(name)
{
	std::cout << "ScavTrap Constructor has been called!!" << std::endl;
	Hitpoints = 100;
	Energy_points = 50;
	Attack_damage = 20;
}

ScavTrap::ScavTrap(const ScavTrap& copy)
{
	std::cout << "ScavTrap Copy Constrctor has been Called!!" << std::endl;
	*this = copy;
}

ScavTrap&	ScavTrap::operator= (const ScavTrap& copy)
{
	std::cout << "ScavTrap Assignation operator called!" << std::endl;
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
	std::cout << "ScavTrap Destructor has been called!!" << std::endl;
}

void	ScavTrap::attack(std::string const& target)
{
	std::cout << "ScavTrap " << Name << " attack " << target << ", causing " << Attack_damage << " points of damage!" << std::endl;
}

void	ScavTrap::guardGate()
{
	std::cout << "ScavTrap has entered in Gate keeper mode." << std::endl;
}