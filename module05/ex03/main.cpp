
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int		main()
{
	try
	{
		ShrubberyCreationForm	shrubbery("Home");
		std::cout << "--------- shrubbery -----------\n" << std::endl;
		shrubbery.Action();

		std::cout << "\n--------- Roboto -----------\n" << std::endl;
		RobotomyRequestForm		robot("Roboto-san");
		robot.Action();

		std::cout << "\n--------- president -----------\n" << std::endl;
		PresidentialPardonForm		president("Younes");
		president.Action();


		std::cout << "\n--------- execute -----------\n" << std::endl;
		Bureaucrat	bureaucrat("Director", 6);
		bureaucrat.signForm(president);
		bureaucrat.executeForm(president);


		std::cout << "\n--------- Intern -----------\n" << std::endl;
		Intern someRandomIntern;
		Form* rrf;
		rrf = someRandomIntern.makeForm("robotomy request", "Bender");
		rrf->Action();
		delete rrf;
		
		std::cout << "\n--------- Other Intern -----------\n" << std::endl;
		Intern someOtherRandomIntern;
		Form* noform;
		noform = someOtherRandomIntern.makeForm("unexisted", "notarget");
		noform->Action();
		delete noform;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	return (0);
}