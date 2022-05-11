/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Handler.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-ayac <hel-ayac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 23:39:28 by hel-ayac          #+#    #+#             */
/*   Updated: 2022/05/10 23:39:29 by hel-ayac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Convert.hpp"

int		isScientific(const std::string& str)
{
	int		i;

	i = -1;
	std::string	science[] = {"-inf", "+inf", "nan"};
	std::string	science_f[] = {"-inff", "+inff", "nanf"};
	while (++i < 3)
	{
		if (str == science[i])
			return (1);
		if (str == science_f[i])
			return (2);
	}
	return (0);
}

int	handler(const std::string& str, int i)
{
	int		point;
	char	last;

	point = 0;
	last = str[(str.length() - 1)];
	if (!isdigit(last) && last != 'f')
		return (0);
	while (i < static_cast<int>(str.length() - 1))
	{
		if (str[i] == '.' && !point)
			point++;
		else if (!isdigit(str[i]))
			return (0);
		i++;
	}
	if (point == 1)
		return (2);
	return (1);
}
