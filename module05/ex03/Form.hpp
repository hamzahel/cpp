/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-ayac <hel-ayac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 18:50:17 by hel-ayac          #+#    #+#             */
/*   Updated: 2022/05/09 18:50:18 by hel-ayac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>
#include <string>
#include <exception>

#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	private:
		const std::string	name;
		const int			gradeSign;
		const int			gradeExecute;
		bool				_signed;
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
		class FormUnsignedException : public std::exception
		{
			public:
				const char* what() const throw();
		};
		Form();
		Form(const std::string& name, const int gradeSign, const int gradeExecute);
		Form(const Form& copy);
		Form& operator = (const Form& copy);
		std::string	getName() const;
		int			getGradeSign() const;
		int			getGradeExecute() const;
		bool		getSigned() const;
		void		beSigned(const Bureaucrat& brt);
		virtual void	Action() const = 0;
		void		execute(Bureaucrat const& executor) const;
		virtual ~Form();
};

std::ostream& operator << (std::ostream& out, const Form& f);

#endif