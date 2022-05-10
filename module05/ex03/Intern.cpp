/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-ayac <hel-ayac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 18:50:22 by hel-ayac          #+#    #+#             */
/*   Updated: 2022/05/09 18:50:23 by hel-ayac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Intern.hpp"

Intern::Intern()
{
}

Intern::Intern(const Intern& copy)
{
	*this = copy;	
}

Intern&	Intern::operator=(const Intern& copy)
{
	(void)copy;
	return (*this);
}

const char*		Intern::FormNameNotfoundException::what() const throw()
{
	return (" form not found!!!");
}

Form*	shrubbery(std::string target)
{
	return (new ShrubberyCreationForm(target));
}

Form*	robotomy(std::string target)
{
	return (new RobotomyRequestForm(target));
}

Form*	presidential(std::string target)
{
	return (new PresidentialPardonForm(target));
}

Form*	Intern::makeForm(std::string name, std::string form)
{
	int		i;
	Form*	(*ptr[3]) (std::string target);

	i = -1;
	ptr[0] = shrubbery;
	ptr[1] = robotomy;
	ptr[2] = presidential;
	std::string names[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};
	while (++i < 3)
	{
		if (names[i] == name)
		{
			std::cout << "Intern creates " << name << std::endl;
			return ((*ptr[i])(form));
		}
	}
	std::cout << "Intern failed to create the form!!" << name;
	throw	FormNameNotfoundException();
	return (NULL);
	
}

Intern::~Intern()
{
}