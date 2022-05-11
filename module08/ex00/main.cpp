/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-ayac <hel-ayac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 19:30:53 by hel-ayac          #+#    #+#             */
/*   Updated: 2022/05/11 19:30:55 by hel-ayac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "easyfind.hpp"


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
    return (0);
}