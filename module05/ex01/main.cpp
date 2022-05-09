/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceo <ceo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/08 22:44:58 by hel-ayac          #+#    #+#             */
/*   Updated: 2022/05/09 11:55:04 by ceo              ###   ########.fr       */
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
		std::cout << bure;
		std::cout << std::endl << std::endl;		
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		std::cout << std::endl << std::endl;
		Form form("competition_2" , 2, 2);
		Bureaucrat bure("kamal", 4);
		bure.signForm(form);
		std::cout << form;
		std::cout << bure;

	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		std::cout << std::endl << std::endl;
		Form form("competition_3" , 2, 2);
		Bureaucrat bure("samire", 4);
		bure.signForm(form);
		form.beSigned(bure);
		std::cout << form;
		std::cout << bure;

	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return (0);
}