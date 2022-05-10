/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-ayac <hel-ayac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 15:03:57 by hel-ayac          #+#    #+#             */
/*   Updated: 2022/05/09 15:04:43 by hel-ayac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : Form("Robotomizing", 72, 45)
{
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : 
	Form("Robotomizing", 72, 45) , target(target)
{
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& copy) : 
	Form("Robotomizing", 72, 45)
{
	*this = copy;	
}

RobotomyRequestForm&	RobotomyRequestForm::operator=(const RobotomyRequestForm& copy)
{
	if (this != &copy)
	{
		this->target = copy.target;
	}
	return (*this);
}

std::string	RobotomyRequestForm::getTarget() const
{
	return (target);
}

void		RobotomyRequestForm::Action() const
{
	int		random;

	srand (time(NULL));
	random = rand() % 2;
	std::cout << "* DRILLING NOISES *\n" << std::endl;
	if (random)
		std::cout << target << " has been robotomized successfully\n";
	else
		std::cout << target << " failed to get robotomized!!\n";
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}