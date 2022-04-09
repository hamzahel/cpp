/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-ayac <hel-ayac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 00:20:37 by hel-ayac          #+#    #+#             */
/*   Updated: 2022/04/09 00:20:38 by hel-ayac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_H
#define CAT_H

#include <iostream>
#include "Animal.hpp"

class Cat: public Animal{
	public:
		Cat();
		~Cat();
		Cat& operator= (const Cat& cat);
		Cat(const Cat& cat);
        void makeSound() const;
};
#endif