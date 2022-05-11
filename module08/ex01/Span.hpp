/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-ayac <hel-ayac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 20:32:38 by hel-ayac          #+#    #+#             */
/*   Updated: 2022/05/11 20:32:38 by hel-ayac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_H
# define SPAN_H

# include <iostream>
# include <vector>
# include <algorithm>

class Span
{
private:
	unsigned int	size;
	unsigned int	stored;
	std::vector<int> vec;

public:
	Span();
	Span(unsigned int n);
	Span(Span const & src);
	Span & operator=(Span const & rhs);
	~Span();

	void	addNumber(int number);
	int		longestSpan(void) const;
	int		shortestSpan(void);

	void	addNumbers(int array[], int len);

	class fullSpanException : public std::exception
	{
		const char * what() const throw()
		{
			return ("Exception : can't add number, Full Span.");
		}
	};
	class noSpanFoundException : public std::exception
	{
		const char * what() const throw()
		{
			return ("Exception : No Span can be found.");
		}
	};
};

#endif