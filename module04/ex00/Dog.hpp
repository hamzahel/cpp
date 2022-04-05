#ifndef DOG_H
#define DOG_H

#include <iostream>

class Dog{
    protected:
        std::string type;
    public:
        Animal();
        ~Animal();
        void setType(std::string type);
        std::string getType( void );
}

#endif