#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include <string>
#include <exception>

class Bureaucrat
{
	private:
		const std::string	name;
		int                 grade;
	public:
		class GradeTooHighException : public std::exception
		{
			public:
				const char* what() const throw();
		};

		class GradeTooLowException : public std::exception
		{
			public:
				const char* what() const throw();
		};
		Bureaucrat();
		Bureaucrat(const std::string& name, int grade);
		Bureaucrat(const Bureaucrat& copy);
		Bureaucrat& operator = (const Bureaucrat& copy);
		~Bureaucrat();
		std::string	getName() const;
		int			getGrade() const;
		void		increment();
		void		decrement();
};

std::ostream& operator << (std::ostream& out, const Bureaucrat& brt);

#endif