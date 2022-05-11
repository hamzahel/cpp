#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <exception>

class ValueNotFoundException : public std::exception
{
    public:
        const char* what() const  throw()
        {
            return ("not Found Error! ");
        }
};

template <typename T>
void easyfind (T& container, int num)
{
    bool check_find;
    std::find(container.begin(), container.end() , num ) == container.end() ? 
        throw ValueNotFoundException()
       : std::cout << "found value : " << num;
}

int main(int ac, char **av)
{
    if (ac != 2)
    {
        std::cout << "you need to enter 3 params" << std::endl;
        return (1);
    }
    int arr[] = {4,2,6,2,1,9};
    std::vector<int> vec(arr, arr + 6);
    try
    {
        easyfind(vec, std::stoi(av[1]));
    }catch(const std::exception & e)
    {
        std::cerr << e.what() << std::endl;
    }
    // int arr[] = {2,5,7,5,3,1};
    // std::vector<int> vect(arr, arr+ 6);

    // std::cout << "the value of vect is " << vect[0] << std::endl;

    // int i = -1;
    // while (++i < 6)
    // {
    //     std::cout << "index : " << i << "value is : " << vect[i] << std::endl;
    // }

    // std::cout << "the first value : " << *vect.begin() << std::endl;
    // std::cout << "the  last value : " << *(vect.end() - 1) << std::endl;

    
    // std::cout << std::endl << std::endl;
    // std::sort(vect.begin() , vect.end());

    // i = -1;
    // while (++i < 6)
    // {
    //     std::cout << "index : " << i << "value is : " << vect[i] << std::endl;
    // }

    return (0);
}