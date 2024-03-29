/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-ayac <hel-ayac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 20:41:59 by hel-ayac          #+#    #+#             */
/*   Updated: 2022/04/24 02:01:31 by hel-ayac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cmath>

class Fixed
{
	private:
		int				_point;
		static const	int _bits = 8;
		
	public:
		Fixed();
		Fixed(int point);
		Fixed(float point);
		Fixed(Fixed const &old);
		Fixed& operator=(Fixed const &old);
		~Fixed();
		int		getRawBits( void );
		void	setRawBits (int raw);
		int		toInt( void ) const;
		float	toFloat( void ) const;
};

std::ostream& operator<<(std::ostream &out,const Fixed &f);