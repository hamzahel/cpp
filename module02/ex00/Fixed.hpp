/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-ayac <hel-ayac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 20:41:59 by hel-ayac          #+#    #+#             */
/*   Updated: 2022/04/23 20:42:04 by hel-ayac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Fixed
{
    private:
        int _point;
        static const int _bits = 8;
    public:
        Fixed();
        Fixed(Fixed &old);
        Fixed& operator= (Fixed &old);
        ~Fixed();
        int getRawBits( void );
        void setRawBits (int const raw);
};

// float tmp = (float) _fixed;
// tmp / (1 << bits);