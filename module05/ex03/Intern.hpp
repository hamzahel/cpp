/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-ayac <hel-ayac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 18:50:24 by hel-ayac          #+#    #+#             */
/*   Updated: 2022/05/09 18:52:53 by hel-ayac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef INTERN_HPP
# define INTERN_HPP

#include <iostream>
#include <string>
#include <exception>

#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Form;

class Intern
{
	public:
		class FormNameNotfoundException : public std::exception
		{
			public:
				const char* what() const throw();
		};
		Intern();
		Intern(const Intern& copy);
		Intern& operator = (const Intern& copy);
		~Intern();
		Form	*makeForm(std::string name, std::string target);
};

std::ostream& operator << (std::ostream& out, const Intern& intern);

#endif
