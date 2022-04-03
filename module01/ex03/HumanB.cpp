#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
    this->name = name;
}

void HumanB::setWeapon(Weapon weapon)
{
    this->weapon = weapon;
}

Weapon HumanB::getWeapon()
{
    return (this->weapon);
}

void HumanB::attack()
{
    std::cout << this->name << " attacks with their " << this->weapon.getType() << std::endl;
}