/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-ayac <hel-ayac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 23:07:39 by hel-ayac          #+#    #+#             */
/*   Updated: 2022/04/03 00:23:17 by hel-ayac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>



int main(int argc, char **argv)
{
    std::string text;
    // std::cout << "the number of argc " << argc << std::endl;
    if (argc == 4)
    {
        std::cout << "you enter"<<std::endl;
        std::ifstream myfile;
        myfile.open(argv[1]);
        while (myfile)
        {
            myfile >> text;
            std::cout << text << std::endl;
        }
        myfile.close();
    }
    else 
        std::cout << "you should enter <filename> str1 str2" << std::endl;
    return (0);
}