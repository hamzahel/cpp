#include "ClapTrap.hpp"

int main(int argc, char **argv)
{
    if (argc != 3)
    {
        return (1);
    }
    const std::string name = argv[1];
    const std::string target = argv[2];
    ClapTrap clap(name);

    clap.takeDamage(5);
    std::cout << std::endl;
    clap.attack(target);
    std::cout << std::endl;
    clap.takeDamage(5);
    std::cout << std::endl;
    clap.beRepaired(3);
    std::cout << std::endl;
    return (0);
}