
#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : Form("PresidentialPardon", 25, 5)
{
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : 
	Form("PresidentialPardon", 25, 5) , _target(target)
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
		this->_target = copy._target;
	}
	return (*this);
}

std::string	PresidentialPardonForm::getTarget() const
{
	return (_target);
}

void		PresidentialPardonForm::Action() const
{
	std::cout << _target << " has been pardoned by Zafod Beeblebrox!!\n" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}