/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceo <ceo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 02:00:45 by hel-ayac          #+#    #+#             */
/*   Updated: 2022/05/02 14:20:23 by ceo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public virtual ClapTrap
{
	public:
		FragTrap();
		FragTrap(const std::string& name);
		FragTrap(FragTrap& copy);
		FragTrap& operator = ( FragTrap& copy);
		~FragTrap();
		void	attack(std::string const& target);
		void	highFivesGuys(void);
};

#endif