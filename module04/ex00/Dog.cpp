#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
    std::cout << "dog constructer called!" << std::endl;
}

Dog::~Dog()
{
    std::cout << "dog destructor called!" << std::endl;
}

Dog::Dog(const Dog& dog)
{
    std::cout << "dog copy constructor called!" << std::endl;
    type = dog.getType();
}

 Dog& Dog::operator= (const Dog& dog)
{
    std::cout << "dog operator assiment called!" << std::endl;
    type = dog.getType();
    return (*this);
}

void Dog::makeSound() const
{
    std::cout << "woof woof woof" << std::endl;
}