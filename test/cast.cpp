#include <iostream>

class Base
{
	public:
		virtual ~Base(){}
};

class A : public Base
{
	
};

class B : public Base
{
	
};

class C : public Base
{
	
};

int main()
{
    Base *base = new C;
    std::cout << "the address of base class is : "<< base << std::endl;
    C &a= dynamic_cast<C&>(*base);

    std::cout << "the value is : " << &a << std::endl;

    // if (a)
    // {
    //     std::cout << "you enter to type a " << &a << std::endl;
    // }else if (b)
    // {
    //     std::cout << "you enter to type b " << &b << std::endl;
    // }else if (c)
    // {
    //     std::cout << "you enter to type c " << c <<std::endl;
    // }
    // std::cout << "the value of a : " << a <<std::endl;
    // delete base;
    return (0);
}