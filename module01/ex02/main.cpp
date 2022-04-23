/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-ayac <hel-ayac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 02:55:09 by hel-ayac          #+#    #+#             */
/*   Updated: 2022/04/23 02:55:10 by hel-ayac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
    std::string s = "HI THIS IS BRAIN";
    std::string *stringPTR = &s;
    std::string &stringREF = s;
    
    std::cout << "The memory adress of s is :" << &s << std::endl;
    std::cout << "The memory adress held by stringPTR is :" << &stringPTR << std::endl;
    std::cout << "The memory adress held by stringREF is :" << &stringREF << std::endl;
    std::cout << "===================================" << std::endl;
    std::cout << "The value of s is :" << s << std::endl;
    std::cout << "The value pointed by stringPTR is :" << *stringPTR << std::endl;
    std::cout << "The value referenced by stringREF is :" << stringREF << std::endl;
    return (0);
}