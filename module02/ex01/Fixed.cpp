/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-ayac <hel-ayac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 20:41:56 by hel-ayac          #+#    #+#             */
/*   Updated: 2022/04/23 22:18:41 by hel-ayac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	this->_point = 0;
}

Fixed::Fixed(int point)
{
	std::cout << "Int constructor called" << std::endl;
	this->_point = point << _bits;
}

Fixed::Fixed(float point )
{
	std::cout << "Float constructor called" << std::endl;
	std::cout << "the value of floating point" << std::roundf(point * (1 << _bits)) << std::endl;
	this->_point = std::roundf(point * (1 << _bits));
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

void Fixed::setRawBits(int raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->_point = raw;
}

Fixed::Fixed(Fixed const &old)
{
	std::cout << "Copy constructor called" << std::endl;
	this->_point = old._point;
}

Fixed& Fixed::operator= (Fixed const &old)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->_point = old._point;
	return (*this);
}

std::ostream& operator<<(std::ostream& out,const Fixed& f)
{
	return out << f.toFloat();
}

int Fixed::toInt() const
{
	return (this->_point >> _bits);
}

float Fixed::toFloat() const
{
	float tmp = (float)_point;
	return (tmp / (1 << this->_bits));
}