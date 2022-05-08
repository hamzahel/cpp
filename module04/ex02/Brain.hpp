/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-ayac <hel-ayac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 15:25:07 by hel-ayac          #+#    #+#             */
/*   Updated: 2022/05/06 13:07:03 by hel-ayac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>
#include <string>
#include <random>

class Brain
{
	private:
		std::string	ideas[100];
	public:
		Brain();
		Brain(const Brain& copy);
		Brain& operator = (const Brain& copy);
		void	setIdea(std::string idea, int i);
		const std::string&	getIdea(int i) const;
		~Brain();
};

#endif