#include "Zombie.hpp"

int main ()
{
    Zombie *z = ZombieHorde(-10, "hamza");
    std::cout << "name : " << z->getName() << std::endl;

    delete[] z;
    return (0);
}