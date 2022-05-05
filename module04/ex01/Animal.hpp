/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-ayac <hel-ayac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 00:20:43 by hel-ayac          #+#    #+#             */
/*   Updated: 2022/05/05 15:25:09 by hel-ayac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>

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
};

#endif