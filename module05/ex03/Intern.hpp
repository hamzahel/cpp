
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
