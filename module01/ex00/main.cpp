/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-ayac <hel-ayac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 22:00:22 by hel-ayac          #+#    #+#             */
/*   Updated: 2022/04/02 22:30:08 by hel-ayac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main ()
{
    Zombie a;
    Zombie *s = a.newZombie("hamza");
    a.randomChump("kamal");
    s->announce();
    delete(s);

    return (0);
}