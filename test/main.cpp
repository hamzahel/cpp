#include <iostream>

class A{
    private:
        std::string name;
    public:
        A(std::string name)
        {
            std::cout << "constructor called!" << std::endl;
            this->name = name;
        }
        std::string getName(void)
        {
            return this->name;
        }
        void setName(std::string value)
        {
            this->name = value;
        }
};

class B : public virtual A {
    public:
        B(std::string name) : A(name)
        {
            std::cout << "B constructor" << std::endl;
        }
        void yial()
        {
            std::cout << "hoooohaaaa" << std::endl;
        }
};

class C : public virtual A{
    public:
        C(std::string name) : A(name)
        {
            std::cout << "C constructor" << std::endl;
        }
        void tell_me()
        {
            std::cout << "i wanna tell you something" << std::endl;
        }
};

class D : public B , public C {
    private:
        std::string name;
    public:

    D(std::string name) :A(name + "_A"), B(name), C(name), name(name)
    {
        std::cout << "D constructor" << std::endl;
    }
    void say()
    {
        std::cout << "the value of child is : " << name << " and the value of parent is " << A::getName() << std::endl;
    }
};

int main()
{
    std::cout << "create the first test" << std::endl;
    D d("kamal");
    d.say();
    return (0);
}