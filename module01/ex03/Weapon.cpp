/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-ayac <hel-ayac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 01:52:19 by hel-ayac          #+#    #+#             */
/*   Updated: 2022/04/23 01:52:20 by hel-ayac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Weapon.hpp"

Weapon::Weapon(){}
Weapon::~Weapon(){}
Weapon::Weapon(std::string type)
{
    this->type = type;
}

void Weapon::setType(const std::string type)
{
    this->type = type;
}

const std::string& Weapon::getType()
{
    return this->type;
}

