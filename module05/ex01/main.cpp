/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-ayac <hel-ayac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/08 22:44:58 by hel-ayac          #+#    #+#             */
/*   Updated: 2022/05/08 22:47:59 by hel-ayac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

int main()
{
	try
	{
		Form form("competition" , 3, 3);
		Bureaucrat bure("hamza", 2);
		form.beSigned(bure);
		bure.signForm(form);
		std::cout << form;
		// std::cout << "----------------\n";
		// Form        form("Competiton", 5, 6);
		// Bureaucrat	bureaucrat("Director", 5);
		// std::cout << bureaucrat;
		// std::cout << form;
		// form.beSigned(bureaucrat);
		// bureaucrat.signForm(form);
		// std::cout << form;
		// std::cout << "\n----------------\n";
		// bureaucrat.decrement();
		// Form        form1("Competiton1", 5, 6);
		// // form1.beSigned(bureaucrat);
		// bureaucrat.signForm(form1);
		// std::cout << form1;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return (0);
}