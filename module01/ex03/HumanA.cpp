#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon)
{
    this->name = name;
    this->weapon = weapon;
}

void HumanA::setWeapon(Weapon weapon)
{
    this->weapon = weapon;
}

Weapon HumanA::getWeapon()
{
    return (this->weapon);
}

void HumanA::attack()
{
    std::cout << this->name << " attacks with their " << getWeapon().getType() << std::endl;
}