/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-ayac <hel-ayac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 15:03:25 by hel-ayac          #+#    #+#             */
/*   Updated: 2022/05/09 18:01:27 by hel-ayac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int		main()
{
	try
	{
		std::cout << "try this code " << std::endl;
		ShrubberyCreationForm sform("kamal");
		PresidentialPardonForm pform("kamal");
		RobotomyRequestForm rform("kamal");
		sform.Action();
		pform.Action();
		rform.Action();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << "\n\n\n";

	try
	{
		std::cout << "try this code " << std::endl;
		
		Bureaucrat buro("hamza", 14);
		ShrubberyCreationForm sform(buro.getName());
		PresidentialPardonForm pform("Present");
		RobotomyRequestForm rform("Robot");
		
		buro.signForm(sform);
		buro.executeForm(sform);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	return (0);
}