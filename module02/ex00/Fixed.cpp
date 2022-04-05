/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-ayac <hel-ayac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 20:41:56 by hel-ayac          #+#    #+#             */
/*   Updated: 2022/04/04 21:11:44 by hel-ayac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
    this->_point = 0;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits()
{
    std::cout << "getRawBits member function called" << std::endl;
    return (this->_point);
}

void Fixed::setRawBits(int const raw)
{
    std::cout << "setRawBits member function called" << std::endl;
    this->_point = raw;
}

Fixed::Fixed(Fixed &old)
{
    std::cout << "Copy constructor called" << std::endl;
    _point = old.getRawBits();
}

Fixed& Fixed::operator= (Fixed &old)
{
    std::cout << "Copy assignment operator called" << std::endl;
    _point = old.getRawBits();
    return (*this);
}
