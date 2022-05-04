#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>
#include <string>
#include <random>

class Brain
{
	private:
		std::string	ideas[100];
	public:
		Brain();
		Brain(const Brain& copy);
		Brain& operator = (const Brain& copy);
		void	set_ideas(std::string idea, int i);
		const std::string&	get_ideas(int i) const;
		~Brain();
};

#endif