#include "Animal.hpp"
// #include "Dog.hpp"
// #include "Cat.hpp"

int main()
{
	const Animal* ani = new Animal();
	ani->setType("Cat");
	std::cout << ani->getType() << std::endl;
	// Animal* meta = new Animal();
	// Animal* j = new Dog();
	// Animal* i = new Cat();
	// std::cout << j->getType() << " " << std::endl;
	// std::cout << i->getType() << " " << std::endl;
	// i->makeSound(); //will output the cat sound!
	// j->makeSound();
	// meta->makeSound();

	return 0;
}