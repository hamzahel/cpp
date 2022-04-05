#include "Animal.hpp"

Animal::Animal()
{}

Animal::~Animal()
{}

void Animal::setType(std::string str)
{
    this->type = str;
}

std::string Animal::getType( void )
{
    return (this->type);
}