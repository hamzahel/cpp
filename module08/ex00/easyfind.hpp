/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-ayac <hel-ayac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 19:30:56 by hel-ayac          #+#    #+#             */
/*   Updated: 2022/05/11 19:32:20 by hel-ayac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>
#include <string>
#include <exception>
#include <vector>
#include <algorithm>

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
    std::find(container.begin(), container.end() , num ) == container.end() ? 
        throw ValueNotFoundException()
       : std::cout << "found value : " << num;
}

#endif