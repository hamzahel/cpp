#include <iostream>
#include <exception>

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

class parent
{
    public:
        parent()
        {
            std::cout << "parent onstructor is called!" << std::endl;
        }

        virtual ~parent()
        {
            std::cout << "parent destructor is called!" << std::endl;
        }
};

class child : public parent 
{
    public:
        child() : parent()
        {
            std::cout << "child contructor is called!" << std::endl;
        }
        virtual ~child()
        {
            std::cout << "child destructor is called!" << std::endl;
        }
};


class TestGrade
{
    public:
        const std::string name;
        int               grade;
        class GradeToHighException : public std::exception
        {
            public:
                const char* what() const throw();
        };
        class GradeToLowException : public std::exception
        {
            public:
                const char* what() const throw();
        };

        
        TestGrade() : name("kamal") , grade(5)
        {
            if (this->grade > 100)
                throw GradeToLowException();
            else if (this->grade <= 0)
                throw GradeToHighException();
        }

        TestGrade(std::string name , int grade) : name(name) , grade(grade)
        {
            if (this->grade > 100)
                throw GradeToLowException();
            else if (this->grade <= 0)
                throw GradeToHighException();
        }

        void incrementGrade()
        {
            if (grade <= 0)
                throw GradeToHighException();
            else
                grade--;
        }
        void decrementGrade()
        {
            if (grade > 100)
                throw GradeToLowException();
            else
                grade++;
        }
};

const char* TestGrade::GradeToLowException::what() const throw ()
{
    return "grade is low!";
}
const char* TestGrade::GradeToHighException::what() const throw()
{
    return "grade is high!";
}

int main()
{
    try {
        TestGrade g;
        g.incrementGrade();
        g.incrementGrade();
        g.incrementGrade();
        g.incrementGrade();
        g.incrementGrade();
        g.incrementGrade();
    }catch(const std::exception& e)
    {
        std::cout << "you have an exception" << e.what() << std::endl;
    }
    return (0);
}