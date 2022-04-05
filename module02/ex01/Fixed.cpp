/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-ayac <hel-ayac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 20:41:56 by hel-ayac          #+#    #+#             */
/*   Updated: 2022/04/04 23:24:29 by hel-ayac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	this->_point_i = 0;
}

Fixed::Fixed(int point)
{
	std::cout << "Int constructor called" << std::endl;
	this->_point_i = point;
}

Fixed::Fixed(float point )
{
	std::cout << "Float constructor called" << std::endl;
	this->_point_f = point;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}
	
int Fixed::getRawBits()
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_point_i);
}

void Fixed::setRawBits(int raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->_point_i = raw;
}

Fixed::Fixed(Fixed const &old)
{
	std::cout << "Copy constructor called" << std::endl;
	this->_point_i = old.toInt();
	this->_point_f = old.toFloat();
}

Fixed& Fixed::operator= (Fixed const &old)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->_point_i = old.toInt();
	this->_point_f = old.toFloat();
	return (*this);
}

std::ostream& operator<<(std::ostream& out,const Fixed& f)
{
	if (f.toFloat() != 0)
		return out << f.toFloat();
	return out << f.toInt();
}

int Fixed::toInt() const
{
	if (this->_point_f > 0)
		return (roundf(this->_point_f));
	return (this->_point_i);
}

float Fixed::toFloat() const
{
	return (this->_point_f);
}
