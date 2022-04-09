/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-ayac <hel-ayac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 00:20:31 by hel-ayac          #+#    #+#             */
/*   Updated: 2022/04/09 00:20:32 by hel-ayac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_H
#define DOG_H

#include <iostream>
#include "Animal.hpp"

class Dog: public Animal{
	public:
		Dog();
		~Dog();
		Dog& operator= (const Dog& dog);
		Dog(const Dog& dog);
        void makeSound() const;
};
#endif