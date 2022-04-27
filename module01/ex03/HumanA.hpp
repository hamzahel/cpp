/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-ayac <hel-ayac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 21:04:19 by hel-ayac          #+#    #+#             */
/*   Updated: 2022/04/23 01:51:09 by hel-ayac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_H
#define HUMANA_H
# include "Weapon.hpp"

class HumanA
{
    private:
        Weapon *weapon;
        std::string name;
    public:
        HumanA(std::string name, Weapon &weapon);
        void setWeapon(Weapon &weapon);
        void attack();
};
#endif