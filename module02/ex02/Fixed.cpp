/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-ayac <hel-ayac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 02:23:09 by hel-ayac          #+#    #+#             */
/*   Updated: 2022/04/24 02:23:10 by hel-ayac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Fixed.hpp"

Fixed::Fixed() : _point(0)
{
}

Fixed::~Fixed()
{
}

Fixed::Fixed(const int fixed)
{
	_point = fixed << _bits;
}

Fixed::Fixed(const float fixed)
{
	_point = std::roundf(fixed * (1 << _bits));
}

Fixed::Fixed(const Fixed& copy)
{
	this->_point = copy._point;
}

Fixed& Fixed::operator= (const Fixed& copy)
{
	_point = copy.getRawBits();
	return *this;
}

int		Fixed::getRawBits() const
{
	return (_point);
}

void	Fixed::setRawBits(int const raw)
{
	_point = raw;
}

int		Fixed::toInt( void ) const
{
	return (_point >> _bits);
}

float	Fixed::toFloat( void ) const
{
	float	tmp = (float)_point;
	return (tmp / (1 << _bits));
}

bool	Fixed::operator<(const Fixed& fixed)
{
	return (this->_point < fixed._point);
}

bool	Fixed::operator>(const Fixed& fixed)
{
	return (this->_point > fixed._point);
}

bool	Fixed::operator<=(const Fixed& fixed)
{
	return (this->_point <= fixed._point);
}

bool	Fixed::operator>=(const Fixed& fixed)
{
	return (this->_point >= fixed._point);
}

bool	Fixed::operator==(const Fixed& fixed)
{
	return (this->_point == fixed._point);
}

bool	Fixed::operator!=(const Fixed& fixed)
{
	return (this->_point != fixed._point);
}

Fixed	Fixed::operator+(const Fixed& fixed)
{
	Fixed temp;
	
	temp._point = this->_point + fixed._point;
	return (temp);
}

Fixed Fixed::operator- (const Fixed& fixed)
{
	Fixed temp;
	
	temp._point = this->_point - fixed._point;
	return (temp);
}

Fixed Fixed::operator* (const Fixed& fixed)
{
	Fixed temp;
	
	temp._point = this->_point * (fixed._point >> _bits);
	return (temp);
}

Fixed Fixed::operator/ (const Fixed& fixed)
{
	Fixed temp;

	temp._point = (this->_point << _bits) / fixed._point;
	return (temp);
}

Fixed& Fixed::operator++()
{
	++this->_point;
	return (*this);
}

Fixed& Fixed::operator--()
{
	--this->_point;
	return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed	temp(*this);
	
	++(*this);
	return (temp);
}

Fixed Fixed::operator--(int)
{
	Fixed	temp(*this);
	
	--(*this);
	return (temp);
}

Fixed& Fixed::min(Fixed& fixed, Fixed& fixed2)
{
	if (fixed <= fixed2)
		return (fixed);
	return (fixed2);
}

Fixed& Fixed::max(Fixed& fixed, Fixed& fixed2)
{
	if (fixed >= fixed2)
		return (fixed);
	return (fixed2);
}

const Fixed& Fixed::min(const Fixed& fixed, const Fixed& fixed2)
{
	if ((Fixed)fixed <= fixed2)
		return (fixed);
	return (fixed2);
}

const Fixed& Fixed::max(const Fixed& fixed, const Fixed& fixed2)
{
	if ((Fixed)fixed >= fixed2)
		return (fixed);
	return (fixed2);
}

std::ostream& operator<< (std::ostream& out, const Fixed& fixed)
{
	return out << fixed.toFloat();
}