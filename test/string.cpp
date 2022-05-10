#include <iostream>
#include <string>


int main()
{
    std::string value = "67";
    double s = std::stod(value);

    std::cout << "the value if double after cast it to string "
     << s << std::endl;

    // int number  = static_cast<int>(s);

    // std::cout << "is digit : " << number << std::endl;
    return (0);   
}
