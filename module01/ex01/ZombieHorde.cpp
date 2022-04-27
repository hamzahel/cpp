/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-ayac <hel-ayac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 22:01:23 by hel-ayac          #+#    #+#             */
/*   Updated: 2022/04/19 23:36:15 by hel-ayac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* ZombieHorde(int n, std::string name)
{
    int i;

    i = 0;
    if (n <= 0)
        n = 1;
    Zombie* z = new Zombie[n];
    while (i < n)
    {
        z[i].setName(name + std::to_string(i));
        z[i].announce();
        i++;
    }
    return (z);
}