/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-ayac <hel-ayac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 03:39:13 by hel-ayac          #+#    #+#             */
/*   Updated: 2022/05/11 03:42:37 by hel-ayac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int		main()
{
	int		arr[] = {5, 9, 7, 8, 1, 2};
	char	str[] = {'h', 'a', 'm', 'z', 'a'};
	Test	tab[5];
	
	iter<int>(arr, 6, print);
	std::cout << "\n";
	iter<char>(str, 5, print);
	std::cout << "\n";
	iter<Test>(tab, 5, print);
	std::cout << "\n";
	
	return (0);
}