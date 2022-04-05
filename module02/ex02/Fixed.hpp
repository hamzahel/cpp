#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <string>
#include <cmath>

class Fixed
{
	private:
		int		_fixed;
		static const int	bits = 8;
	public:
		Fixed();
		Fixed(const int fixed);
		Fixed(const float fixed);
		~Fixed();
		Fixed(const Fixed& copy);
		Fixed& operator = (const Fixed& copy);
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat( void ) const;
		int		toInt( void ) const;
		bool	operator<(const Fixed& fixed);
		bool	operator>(const Fixed& fixed);
		bool	operator>=(const Fixed& fixed);
		bool	operator<=(const Fixed& fixed);
		bool	operator==(const Fixed& fixed);
		bool	operator!=(const Fixed& fixed);
		Fixed	operator+(const Fixed& fixed);
		Fixed	operator-(const Fixed& fixed);
		Fixed	operator*(const Fixed& fixed);
		Fixed	operator/(const Fixed& fixed);
		Fixed&	operator++();
		Fixed&	operator--();
		Fixed	operator++(int);
		Fixed	operator--(int);
		static Fixed& min(Fixed& fixed, Fixed& fixed2);
		static const Fixed& min(const Fixed& fixed, const Fixed& fixed2);
		static Fixed& max(Fixed& fixed, Fixed& fixed2);
		static const Fixed& max(const Fixed& fixed, const Fixed& fixed2);
};

std::ostream& operator << (std::ostream& out, const Fixed& fixed);
		
#endif