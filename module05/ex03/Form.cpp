
#include "Form.hpp"

Form::Form() : name("form"), gradeSign(0), gradeExecute(0), _signed(0)
{
	std::cout << this->getName();
	throw GradeTooHighException();
}

Form::Form(const std::string& name, const int gradeSign, const int gradeExecute) : 
	name(name), gradeSign(gradeSign), gradeExecute(gradeExecute), _signed(0)
{
	if (gradeSign < 1 || gradeExecute < 1 || gradeSign > 150 || gradeExecute > 150)
		std::cout << this->getName();
	if (gradeSign < 1 || gradeExecute < 1)
		throw GradeTooHighException();
	else if (gradeSign > 150 || gradeExecute > 150)
		throw GradeTooLowException();
}

Form::Form(const Form& copy) :
	name(copy.name), gradeSign(copy.gradeSign), gradeExecute(copy.gradeExecute)
{
	*this = copy;
}

Form&	Form::operator= (const Form& copy)
{
	if (this != &copy)
		_signed = copy.getSigned();
	return (*this); 
}

const char*		Form::GradeTooHighException::what() const throw()
{
	return ("'s grade is too high!!!");
}

const char*		Form::GradeTooLowException::what() const throw()
{
	return ("'s grade is too low!!!");
}

const char*		Form::FormUnsignedException::what() const throw()
{
	return ("'s not signed!!!");
}

std::string	Form::getName() const
{
	return (this->name);
}

int			Form::getGradeSign() const
{
	return (this->gradeSign);
}

int			Form::getGradeExecute() const
{
	return (this->gradeExecute);
}

bool		Form::getSigned() const
{
	return (this->_signed);
}

void		Form::beSigned(const Bureaucrat& brt)
{
	if (brt.getGrade() <= getGradeSign())
		_signed = 1;
	else
	{
		std::cout << this->getName();
		throw GradeTooHighException();
	}
}

void		Form::execute(Bureaucrat const& executor) const
{
	if (!getSigned())
		throw FormUnsignedException();
	else if (this->gradeExecute < executor.getGrade())
		throw GradeTooHighException();
	this->Action();
}

Form::~Form()
{
}

std::ostream& operator << (std::ostream& out, const Form& f)
{
	out << f.getName() << " form requires " << f.getGradeSign() << " grade to sign and " 
	 << f.getGradeExecute() << " grade to execute. The actual form state is ";
	(f.getSigned() ? out << "Signed\n" : out << "UnSigned\n");
	return out;
}