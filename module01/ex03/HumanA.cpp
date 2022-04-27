/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-ayac <hel-ayac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 21:04:16 by hel-ayac          #+#    #+#             */
/*   Updated: 2022/04/23 01:51:24 by hel-ayac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon)
{
    this->name = name;
    this->weapon = &weapon;
}

void HumanA::setWeapon(Weapon &weapon)
{
    this->weapon = &weapon;
}

void HumanA::attack()
{
    std::cout << this->name << " attacks with their " << (this->weapon)->getType() << std::endl;
}