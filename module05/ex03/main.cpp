#include "Form.hpp"

int main()
{
	try
	{
		std::cout << "----------------\n";
		Form        form("Competiton", 5, 6);
		Bureaucrat	bureaucrat("Director", 5);
		std::cout << bureaucrat;
		std::cout << form;
		form.beSigned(bureaucrat);
		bureaucrat.signForm(form);
		std::cout << form;
		std::cout << "\n----------------\n";
		bureaucrat.decrement();
		Form        form1("Competiton1", 5, 6);
		// form1.beSigned(bureaucrat);
		bureaucrat.signForm(form1);
		std::cout << form1;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return (0);
}