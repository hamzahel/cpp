/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-ayac <hel-ayac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 00:20:06 by hel-ayac          #+#    #+#             */
/*   Updated: 2022/04/09 00:59:36 by hel-ayac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_H
#define WRONGANIMAL_H

#include <iostream>

class WrongAnimal{
    protected:
        std::string type;
    public:
        WrongAnimal();
        WrongAnimal(const std::string type);
        virtual ~WrongAnimal();
        WrongAnimal(const WrongAnimal &animal);
        WrongAnimal& operator= (WrongAnimal const &animal);
        std::string getType( void ) const;
        virtual void    makeSound() const;
};

#endif