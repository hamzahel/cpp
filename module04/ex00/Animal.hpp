#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>

class Animal{
    protected:
        std::string type;
    public:
        Animal();
        Animal(const std::string type);
        ~Animal();
        Animal(const Animal &animal);
        const Animal& operator= (Animal const &animal);
        std::string getType( void ) const;
        virtual void    makeSound() const;
};

#endif