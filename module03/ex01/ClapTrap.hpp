# ifndef CLAPTRAP_H
# define CLAPTRAP_H

# include <iostream>

class ClapTrap
{
    private:
        std::string name;
        int         hitPoints;
        int         energyPoints;
        int         attackDamage;
    public:
    ClapTrap(const std::string& name);
    ClapTrap(const ClapTrap& l);
    ~ClapTrap();
    void operator = (const ClapTrap &l);
    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
};
#endif