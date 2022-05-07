
#ifndef SHRUBBERYCRATIONFORM_HPP
# define SHRUBBERYCRATIONFORM_HPP

#include <fstream>
#include "Form.hpp"

class ShrubberyCreationForm : public Form
{
	private:
		std::string		_target;
	public:
		ShrubberyCreationForm();
		ShrubberyCreationForm(std::string target);
		ShrubberyCreationForm(const ShrubberyCreationForm& copy);
		ShrubberyCreationForm& operator =(const ShrubberyCreationForm& copy);
		~ShrubberyCreationForm();
		std::string	getTarget() const;
		void			Action() const;
};

#endif