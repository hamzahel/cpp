/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceo <ceo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 00:20:31 by hel-ayac          #+#    #+#             */
/*   Updated: 2022/05/04 05:49:49 by ceo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_H
#define DOG_H

#include <iostream>
#include "Animal.hpp"

class Dog: public Animal{
	private:
		Brain	*brain;
	public:
		Dog();
		virtual ~Dog();
		Dog& operator= (const Dog& dog);
		Dog(const Dog& dog);
        void makeSound() const;
};
#endif