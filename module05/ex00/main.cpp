#include "Bureaucrat.hpp"

int main()
{
	try
	{
		std::cout << "----- Director -----\n";
		Bureaucrat	bureaucrat("Director", 1);
		std::cout << bureaucrat;
		bureaucrat.increment();
		std::cout << bureaucrat;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		std::cout << "----- Director1 -----\n";
		Bureaucrat	bureaucrat1("Director1", 150);
		std::cout << bureaucrat1;
		bureaucrat1.decrement();
		std::cout << bureaucrat1;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		std::cout << "----- Director2 -----\n";
		Bureaucrat	bureaucrat2("Director2", 15);
		std::cout << bureaucrat2;
		bureaucrat2.increment();
		std::cout << bureaucrat2;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		std::cout << "----- Director3 -----\n";
		Bureaucrat	bureaucrat3("Director3", 15);
		std::cout << bureaucrat3;
		bureaucrat3.decrement();
		std::cout << bureaucrat3;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return (0);
}