#ifndef HUMANB_H
#define HUMANB_H
# include "Weapon.hpp"

class HumanB
{
    private:
        Weapon weapon;
        std::string name;
    public:
        HumanB(std::string name);
        void setWeapon(Weapon weapon);
        Weapon getWeapon();
        void attack();
};
#endif