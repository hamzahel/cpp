/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-ayac <hel-ayac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 04:49:59 by hel-ayac          #+#    #+#             */
/*   Updated: 2022/05/04 13:04:31 by hel-ayac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef CLAPTRAP_H
# define CLAPTRAP_H

# include <iostream>

class ClapTrap
{
    private:
        std::string name;
        int         hitPoints;
        int         energyPoints;
        int         attackDamage;
    public:
        ClapTrap();
        ClapTrap(const std::string& name);
        ClapTrap(const ClapTrap& l);
        ~ClapTrap();
        
        // getters and setters
        void setName(std::string value);
        void setHitPoint(int value);
        void setEnergyPoint(int value);
        void setAttackDamage(int value);
        std::string getName(void);
        int         getHitPoint(void);
        int         getAttackDamage(void);
        int         getEnergyPoint(void);
        void operator = (ClapTrap &l);
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
};
#endif