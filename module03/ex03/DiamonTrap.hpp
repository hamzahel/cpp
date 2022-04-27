
#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap
{
	private:
		std::string	Name;
	public:
		DiamondTrap();
		DiamondTrap(const std::string& name);
		DiamondTrap(const DiamondTrap& copy);
		DiamondTrap& operator = (const DiamondTrap& copy);
		~DiamondTrap();
		void	attack(std::string const& target);
		void	whoAmI(void);
};

#endif