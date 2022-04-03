/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-ayac <hel-ayac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 22:00:18 by hel-ayac          #+#    #+#             */
/*   Updated: 2022/04/02 22:22:26 by hel-ayac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <iostream>
#include <string>

class Zombie{
    private:
        std::string name;
    public:
        Zombie();
        Zombie(std::string name);
        ~Zombie(void);
        void setName(std::string name);
        std::string getName();
        void    announce( void );
        Zombie *newZombie(std::string name);
        void    randomChump(std::string name);
};

Zombie* ZombieHorde(int n, std::string name);

#endif
