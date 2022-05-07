
#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name("Bureaucrat"), grade(0)
{
	std::cout << this->getName();
	throw GradeTooHighException();
}

Bureaucrat::Bureaucrat(const std::string& name, int grade) : name(name)
{
	if (grade < 1 || grade > 150)
		std::cout << this->getName();
	if (grade < 1)
		throw GradeTooHighException();
	else if (grade > 150)
		throw GradeTooLowException();
	this->grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat& copy) : name(copy.name)
{
	*this = copy;
}

Bureaucrat&	Bureaucrat::operator= (const Bureaucrat& copy)
{
	if (this != &copy)
		grade = copy.getGrade();
	return (*this);
}

const char*		Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("'s grade is too high!!!");
}

const char*		Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("'s grade is too low!!!");
}

std::string	Bureaucrat::getName() const
{
	return (this->name);
}

int			Bureaucrat::getGrade() const
{
	return (this->grade);
}

void		Bureaucrat::increment()
{
	this->grade--;
	if (this->grade < 1)
	{
		std::cout << this->getName();
		throw GradeTooHighException();
	}
}

void		Bureaucrat::decrement()
{
	this->grade++;
	if (grade > 150)
	{
		std::cout << this->getName();
		throw GradeTooLowException();
	}
}

void		Bureaucrat::signForm(Form& f)
{
	try
	{
		if (this->getGrade() > f.getGradeSign())
			throw GradeTooLowException();
		f.beSigned(*this);
		std::cout << this->getName() << " signs the " << f.getName() << " form" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << this->getName() << " can't sign " << f.getName() << 
		" form because " << this->getName() << e.what() << std::endl;
	}
}

Bureaucrat::~Bureaucrat()
{
}

std::ostream& operator << (std::ostream& out, const Bureaucrat& brt)
{
	out << brt.getName() << ", bureaucrat grade " << brt.getGrade() << ".\n";
	return out;
}