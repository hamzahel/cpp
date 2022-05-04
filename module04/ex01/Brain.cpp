#include "Brain.hpp"

Brain::Brain()
{
	std::string	randIdeas[3] = {"i don't have any ideas", "i'm the best", "why i'm here"};
	int	i = 0;
	std::default_random_engine generator;
	std::uniform_int_distribution<int> distribution(0,2);
	int rand =  distribution(generator);

	std::cout << "Brain constructor is called!!" << std::endl;
	while (i < 100)
	{
		rand =  distribution(generator);
		ideas[i] = randIdeas[rand];
		i++;
	}
}

Brain::Brain(const Brain& copy)
{
	std::cout << "Brain copy constructor is called!!" << std::endl;
	*this = copy;
}

Brain& Brain::operator= (const Brain& copy)
{
	int		i = 0;
	
	std::cout << "Brain Assignment operator is called!!" << std::endl;
	if (this != &copy)
	{
		while (i < 100)
		{
			this->ideas[i] = copy.ideas[i];
			i++;
		}
	}
	return (*this);
}

void	Brain::set_ideas(std::string idea, int i)
{
	if (i < 100)
		ideas[i] = idea;
}

const std::string&	Brain::get_ideas(int i) const
{
	return (ideas[i]);
}

Brain::~Brain()
{
	std::cout << "Brain destructor is called!!" << std::endl;
}