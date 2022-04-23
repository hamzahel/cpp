/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-ayac <hel-ayac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 02:55:15 by hel-ayac          #+#    #+#             */
/*   Updated: 2022/04/23 02:55:16 by hel-ayac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main ()
{
    Zombie *z = ZombieHorde(-10, "hamza");
    std::cout << "name : " << z->getName() << std::endl;

    delete[] z;
    return (0);
}