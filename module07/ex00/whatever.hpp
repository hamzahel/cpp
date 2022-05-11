/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-ayac <hel-ayac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 02:19:22 by hel-ayac          #+#    #+#             */
/*   Updated: 2022/05/11 04:21:32 by hel-ayac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef WHATEVER_HPP
# define WHATEVER_HPP

#include <iostream>
#include <string>

template <typename T>
void	swap(T& x , T& y)
{
	T z;

	z = x;
	x = y;
	y = z;
}

template <typename T>
T	min(T v1, T v2)
{
	return (v1 < v2) ? v1 : v2;
}

template <typename T>
T	max(T v1, T v2)
{
	return (v1 > v2) ? v1 : v2;
}

#endif