/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-ayac <hel-ayac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 20:29:25 by hel-ayac          #+#    #+#             */
/*   Updated: 2022/05/11 20:34:43 by hel-ayac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() : size(0), stored(0)
{

}

Span::Span(unsigned int n)
{
	this->size = n;
	this->stored = 0;
}

void	Span::addNumber(int number)
{
	try
	{
		if (this->stored < this->size)
		{
			this->vec.push_back(number);
			this->stored++;
		}
		else
			throw(fullSpanException());
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

int		Span::longestSpan(void) const
{
	try
	{
		if ( stored <= 1)
			throw(noSpanFoundException());
		int min = *std::min_element(vec.begin(),vec.begin() + stored - 1);
		int max = *std::max_element(vec.begin(),vec.end());

		return (max - min);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return (-1);
}

int		Span::shortestSpan(void)
{
	try
	{
		if (stored <= 1)
			throw(noSpanFoundException());
		std::vector<int>::iterator iter;
		std::vector<int>::iterator iter2;
		int tmp = INT_MAX;

		for (iter = vec.begin() ; iter != vec.begin() + stored ; iter++ )
		{
			for (iter2 = iter + 1 ; iter2 != vec.begin() + stored ; iter2++ )
			{
				if (std::abs(*iter - *iter2) < tmp)
					tmp = std::abs(*iter - *iter2);
			}
		}
		return (tmp);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return (-1);
}

void	Span::addNumbers(int array[], int len)
{
	try
	{
		if ( len + this->stored <= this->size )
		{
			vec.insert(vec.end(), array, array + len);
			this->stored += len;
		}
		else
			throw(fullSpanException());
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

// DEBUG
	// std::vector<int>::iterator it;
	// std::cout << "myvector contains:";
	// for (it=vec.begin(); it<vec.end(); it++)
	// 	std::cout << ' ' << *it;
	// std::cout << '\n';
}

Span::~Span()
{

}

Span::Span( Span const & rhs )
{
	vec = rhs.vec;
	size = rhs.size;
	stored = rhs.stored;
}

Span & Span::operator=( Span const & rhs )
{
	vec = rhs.vec;
	size = rhs.size;
	stored = rhs.stored;
	return (*this);
}
