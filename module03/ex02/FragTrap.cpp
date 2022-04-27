
#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	std::cout << "FragTrap default Constructor has been called" << std::endl;
}

FragTrap::FragTrap(const std::string& name) : ClapTrap(name)
{
	std::cout << "FragTrap Constructor has been called!!" << std::endl;
	Hitpoints = 100;
	Energy_points = 100;
	Attack_damage = 30;
}

FragTrap::FragTrap(const FragTrap& copy)
{
	std::cout << "FragTrap Copy Constrctor has been Called!!" << std::endl;
	*this = copy;
}

FragTrap&	FragTrap::operator= (const FragTrap& copy)
{
	std::cout << "FragTrap Assignation operator called!" << std::endl;
	if (this != &copy)
	{
		this->Name = copy.Name;
		this->Hitpoints = copy.Hitpoints;
		this->Energy_points = copy.Energy_points;
		this->Attack_damage = copy.Attack_damage;
	}
	return (*this);
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap Destructor has been called!!" << std::endl;
}

void	FragTrap::attack(std::string const& target)
{
	std::cout << "FragTrap " << Name << " attack " << target << ", causing " << Attack_damage << " points of damage!" << std::endl;
}

void	FragTrap::highFivesGuys()
{
	std::cout << "high fives!!" << std::endl;
}