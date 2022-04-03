#ifndef HUMANA_H
#define HUMANA_H
# include "Weapon.hpp"

class HumanA
{
    private:
        Weapon weapon;
        std::string name;
    public:
        HumanA(std::string name, Weapon &weapon);
        void setWeapon(Weapon weapon);
        Weapon getWeapon();
        void attack();
};
#endif