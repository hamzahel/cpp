/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceo <ceo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 00:20:43 by hel-ayac          #+#    #+#             */
/*   Updated: 2022/05/06 09:33:28 by ceo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>
#include "Brain.hpp"

class Animal{
    protected:
        std::string type;
    public:
        Animal();
        Animal(const std::string type);
        virtual ~Animal();
        Animal(const Animal &animal);
        const Animal& operator= (Animal const &animal);
        std::string getType( void ) const;
        virtual void    makeSound() const;
        virtual Brain* getBrain(void) const = 0;
};

#endif