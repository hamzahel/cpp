#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>

class Animal{
    private:
        std::string type;
    public:
        Animal();
        ~Animal();
        Animal(Animal const &animal);
        const Animal& operator= (Animal const &animal);
        void setType(const std::string type);
        std::string getType( void ) const;
        void    makeSound();
};

#endif