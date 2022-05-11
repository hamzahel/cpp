/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-ayac <hel-ayac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 23:39:04 by hel-ayac          #+#    #+#             */
/*   Updated: 2022/05/11 00:36:54 by hel-ayac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Class.hpp"

Base*	generate(void)
{
	Base*	base;
	int		random;

	srand (time(NULL));
	random = rand() % 3;
	switch (random)
	{
		case 0:
			base = new A;
			break;
		case 1:
			base = new B;
			break;
		case 2:
			base = new C;
			break;
	}
	return (base);
}

void	identify(Base* p)
{
	A *a;
	B *b;
	C *c;

	a = dynamic_cast<A*>(p);
	b = dynamic_cast<B*>(p);
	c = dynamic_cast<C*>(p);
	if (a)
		std::cout << "A\n";
	else if (b)
		std::cout << "B\n";
	else if (c)
		std::cout << "C\n";
	else
		std::cout << "None of the derived Classes\n";
}

int number = static_cast<int>(78788.78f);

void	identify(Base& p)
{
	try
	{
		A &a = dynamic_cast<A&>(p);
		std::cout << "A\n";
		(void)a;
		return ;
	}
	catch (const std::exception& e){}
	try
	{
		B &b = dynamic_cast<B&>(p);
		std::cout << "B\n";
		(void)b;
		return ;
	}
	catch (const std::exception& e){}
	try
	{
		C &c = dynamic_cast<C&>(p);
		std::cout << "C\n";
		(void)c;
		return ;
	}
	catch (const std::exception& e){}
	std::cout << "None of the derived Classes\n";
}

int		main()
{
	Base*	base;
	base = generate();

	std::cout << "Identify real type using pointers!!\n";
	identify(base);
	std::cout << "Identify real type using reference!!\n";
	identify(*base);
	
	delete base;
	return (0);
}