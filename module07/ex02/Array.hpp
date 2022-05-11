/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-ayac <hel-ayac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 03:49:52 by hel-ayac          #+#    #+#             */
/*   Updated: 2022/05/11 04:00:34 by hel-ayac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>
#include <string>
#include <exception>
#include <time.h>

template <typename T>
class	Array
{
	private:
		T	*arr;
		unsigned int	n;
	public:
		class InvalidIndexException : public std::exception
		{
			public:
				const char* what() const throw(){return ("Invalid index!!");}
		};
		Array()
		{
			arr = NULL;
			n = 0;
		};
		Array(unsigned int n) : n(n)
		{
			this->arr = new T[n]();
		}
		Array(const Array& copy)
		{
			this->arr = nullptr;
			*this = copy;
		}
		Array&	operator=(const Array& copy)
		{
			if (this != &copy)
			{
				unsigned int	i;

				i = -1;
				delete [] this->arr;
				this->n = copy.n;
				this->arr = new T[n];
				while (++i < n)
					this->arr[i] = copy.arr[i];
			}
			return (*this);
		}
		T&	operator[](unsigned int n)
		{
			if (n >= this->n || n < 0)
				throw InvalidIndexException();
			return this->arr[n];
		}
		unsigned int	size(){return (n);}
		~Array()
		{
			delete [] this->arr;
		}
};

class Test
{
	private:
		std::string	name;
	public:
		Test(void) : name("kamal") {}
		std::string		getName(void) const {return this->name;}
};

std::ostream& operator<<(std::ostream& out, Test const& test)
{
	out << test.getName();
	return out;
}

#endif