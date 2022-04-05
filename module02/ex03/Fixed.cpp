
#include "Fixed.hpp"

Fixed::Fixed() : _fixed(0)
{
}

Fixed::~Fixed()
{
}

Fixed::Fixed(const int fixed)
{
	_fixed = fixed << bits;
}

Fixed::Fixed(const float fixed)
{
	_fixed = roundf(fixed * (1 << bits));
}

Fixed::Fixed(const Fixed& copy)
{
	*this = copy;
}

Fixed& Fixed::operator= (const Fixed& copy)
{
	_fixed = copy.getRawBits();
	return *this;
}

int		Fixed::getRawBits() const
{
	return (_fixed);
}

void	Fixed::setRawBits(int const raw)
{
	_fixed = raw;
}

int		Fixed::toInt( void ) const
{
	return (_fixed >> bits);
}

float	Fixed::toFloat( void ) const
{
	float	tmp = (float)_fixed;
	return (tmp / (1 << bits));
}

bool	Fixed::operator<(const Fixed& fixed)
{
	return (this->_fixed < fixed._fixed);
}

bool	Fixed::operator>(const Fixed& fixed)
{
	return (this->_fixed > fixed._fixed);
}

bool	Fixed::operator<=(const Fixed& fixed)
{
	return (this->_fixed <= fixed._fixed);
}

bool	Fixed::operator>=(const Fixed& fixed)
{
	return (this->_fixed >= fixed._fixed);
}

bool	Fixed::operator==(const Fixed& fixed)
{
	return (this->_fixed == fixed._fixed);
}

bool	Fixed::operator!=(const Fixed& fixed)
{
	return (this->_fixed != fixed._fixed);
}

Fixed	Fixed::operator+(const Fixed& fixed)
{
	Fixed temp;
	
	temp._fixed = this->_fixed + fixed._fixed;
	return (temp);
}

Fixed Fixed::operator- (const Fixed& fixed)
{
	Fixed temp;
	
	temp._fixed = this->_fixed - fixed._fixed;
	return (temp);
}

Fixed Fixed::operator* (const Fixed& fixed)
{
	Fixed temp;
	
	temp._fixed = this->_fixed * (fixed._fixed >> bits);
	return (temp);
}

Fixed Fixed::operator/ (const Fixed& fixed)
{
	Fixed temp;

	temp._fixed = (this->_fixed << bits) / fixed._fixed;
	return (temp);
}

Fixed& Fixed::operator++()
{
	++this->_fixed;
	return (*this);
}

Fixed& Fixed::operator--()
{
	--this->_fixed;
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
	out << fixed.toFloat();
	return out;
}