/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-ayac <hel-ayac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 15:03:49 by hel-ayac          #+#    #+#             */
/*   Updated: 2022/05/09 16:29:14 by hel-ayac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : Form("PresidentialPardon", 25, 5)
{
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : 
	Form("PresidentialPardon", 25, 5) , target(target)
{
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& copy) : 
	Form("PresidentialPardon", 25, 5)
{
	*this = copy;
}

PresidentialPardonForm&	PresidentialPardonForm::operator=(const PresidentialPardonForm& copy)
{
	if (this != &copy)
	{
		this->target = copy.target;
	}
	return (*this);
}

std::string	PresidentialPardonForm::getTarget() const
{
	return (target);
}

void		PresidentialPardonForm::Action() const
{
	std::cout << target << " has been pardoned by Zafod Beeblebrox!!\n" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}