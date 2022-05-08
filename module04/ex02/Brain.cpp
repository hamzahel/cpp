/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-ayac <hel-ayac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 15:24:58 by hel-ayac          #+#    #+#             */
/*   Updated: 2022/05/06 13:06:34 by hel-ayac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::string	randIdeas[3] = {"i don't have any ideas", "i'm the best", "why i'm here"};
	int	i = 0;
	std::default_random_engine generator;
	std::uniform_int_distribution<int> distribution(0,2);
	int rand =  distribution(generator);

	std::cout << "Brain constructor called!!" << std::endl;
	while (i < 100)
	{
		rand =  distribution(generator);
		ideas[i] = randIdeas[rand];
		i++;
	}
}

Brain::Brain(const Brain& copy)
{
	std::cout << "Brain copy constructor called!!" << std::endl;
	*this = copy;
}

Brain& Brain::operator= (const Brain& copy)
{
	int		i = 0;
	std::cout << "Brain Assignment operator called!!" << std::endl;
	while (i < 100)
	{
		this->ideas[i] = copy.ideas[i];
		i++;
	}
	return (*this);
}


void	Brain::setIdea(std::string idea, int i)
{
	if (i < 100)
		ideas[i] = idea;
}

const std::string&	Brain::getIdea(int i) const
{
	return (ideas[i]);
}

Brain::~Brain()
{
	std::cout << "Brain destructor called!!" << std::endl;
}