/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceo <ceo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 00:20:37 by hel-ayac          #+#    #+#             */
/*   Updated: 2022/05/04 05:49:44 by ceo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_H
#define CAT_H

#include <iostream>
#include "Animal.hpp"

class Cat: public Animal{
	private:
		Brain *brain;
	public:
		Cat();
		virtual ~Cat();
		Cat& operator= (const Cat& cat);
		Cat(const Cat& cat);
        void makeSound() const;
};
#endif