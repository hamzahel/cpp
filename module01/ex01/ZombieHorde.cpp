/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-ayac <hel-ayac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 22:01:23 by hel-ayac          #+#    #+#             */
/*   Updated: 2022/04/02 23:05:32 by hel-ayac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* ZombieHorde(int n, std::string name)
{
    int i;

    i = 0;
    Zombie* z = new Zombie[n];
    while (i < n)
    {
        // std::cout << "name : " << 
        z[i].setName(name + std::to_string(i));
        z[i].announce();
        i++;
    }
    return (z);
}