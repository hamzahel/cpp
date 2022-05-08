/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-ayac <hel-ayac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 00:20:37 by hel-ayac          #+#    #+#             */
/*   Updated: 2022/05/06 16:24:34 by hel-ayac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_H
#define CAT_H

#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Cat: public Animal
{
	private:
		Brain *brain;
	public:
		Cat();
		virtual ~Cat();
		const Cat& operator= (const Cat& cat);
		Cat(const Cat& cat);
        void makeSound() const;
		void setBrain(Brain* brain);
		virtual Brain* getBrain(void) const ;
		
};
#endif