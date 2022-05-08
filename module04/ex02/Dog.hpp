/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-ayac <hel-ayac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 00:20:31 by hel-ayac          #+#    #+#             */
/*   Updated: 2022/05/06 16:23:44 by hel-ayac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_H
#define DOG_H

#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Dog: public Animal
{
	private:
		Brain	*brain;
	public:
		Dog();
		virtual ~Dog();
		Dog& operator= (const Dog& dog);
		Dog(const Dog& dog);
        void makeSound() const;
		void setBrain(Brain* brain);
		virtual Brain* getBrain(void) const ;
};
#endif