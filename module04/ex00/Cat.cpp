#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
    std::cout << "cat constructer called!" << std::endl;
}

Cat::~Cat()
{
    std::cout << "cat destructor called!" << std::endl;
}

Cat::Cat(const Cat& cat)
{
    std::cout << "Copy constructor called!" << std::endl;
    type = cat.type;
}

Cat& Cat::operator= (const Cat& cat)
{
    std::cout << "cat operator assiment called!" << std::endl;
    type = cat.type;
    return (*this);
}

void Cat::makeSound() const
{
    std::cout << "meaw meaw meaw" << std::endl;
}