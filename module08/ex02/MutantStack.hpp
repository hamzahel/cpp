#ifndef MUTANT_STACK_H
#define MUTANT_STACK_H

# include <iostream>
# include <stack>
# include <algorithm>
# include <deque>
# include <vector>
# include <list>

template <typename T, typename Container = std::deque<T> >

class MutantStack : public std::stack<T>
{
public:
	MutantStack(){};
	~MutantStack(){};

	typedef typename Container::iterator iterator;

	iterator begin()
	{
		return this->c.begin();
	}
	iterator end()
	{
		return this->c.end();
	}
};

#endif