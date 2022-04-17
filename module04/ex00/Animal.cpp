#include "Animal.hpp"

Animal::Animal()
{
    std::cout << "animal Constructor called!" << std::endl;
}

Animal::~Animal()
{
    std::cout << "animal Destructor called!" << std::endl;
}

void Animal::setType(const std::string str)
{
    std::cout << "animal settype called!" << std::endl;
    type = str;
}

std::string Animal::getType( void ) const
{
    std::cout << "animal gettype called!" << std::endl; 
    return (type);
}

Animal::Animal(Animal const &animal)
{
    std::cout << "animal Copy constructor called!"<< std::endl;
    type = animal.type;
}

const Animal& Animal::operator=(Animal const &ani)
{
    std::cout << "animal operator assiment called!" << std::endl;
    type = ani.type;
    return (const Animal&)*this;
}

void Animal::makeSound()
{
    std::cout << "animal sound" << std::endl; 
}