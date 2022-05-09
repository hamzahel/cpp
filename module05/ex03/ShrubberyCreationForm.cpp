/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-ayac <hel-ayac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 15:04:02 by hel-ayac          #+#    #+#             */
/*   Updated: 2022/05/09 16:14:54 by hel-ayac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : Form("ShrubberyCreation", 145, 137)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : 
	Form("ShrubberyCreation", 145, 137) , target(target)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& copy) : 
	Form("ShrubberyCreation", 145, 137)
{
	*this = copy;	
}

ShrubberyCreationForm&	ShrubberyCreationForm::operator=(const ShrubberyCreationForm& copy)
{
	if (this != &copy)
	{
		this->target = copy.target;
	}
	return (*this);
}

std::string	ShrubberyCreationForm::getTarget() const
{
	return (target);
}

void		ShrubberyCreationForm::Action() const
{
	std::ofstream	outfile;
	std::string		file;

	file = getTarget().append("_shrubbery");
	outfile.open(file);
	if (outfile.is_open())
	{
		outfile << "              00000          \n";
		outfile << "           00000000000     \n";
		outfile << "         000000000000000           \n";
		outfile << "       0000000000000000000            \n";
		outfile << "      000000000000000000000            \n";
		outfile << "       0000000000000000000         \n";
		outfile << "         000000000000000          \n";
		outfile << "            _/_/_\\_\\_           \n";
		outfile << "              _|||_           \n";
		outfile << "               |||          \n";
		outfile << "               |||          \n";
		outfile << "               |||          \n";
		outfile << "               |||           \n";
		
		std::cout << "File created successfully!!\n";
	}
	else
		std::cout << "Can't open the file, File doesn't exist or permission denied!!\n";
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}