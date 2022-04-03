/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-ayac <hel-ayac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 23:07:39 by hel-ayac          #+#    #+#             */
/*   Updated: 2022/04/03 22:59:33 by hel-ayac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int main(int argc, char **argv)
{
    std::string text;
    std::ifstream myfile;
    std::ofstream newfile;
    std::size_t n;
    
    
    if (argc == 4)
    {
        myfile.open(argv[1]);
        newfile.open(std::string(argv[1]) + "new");
        while (std::getline(myfile, text))
        {
            n = text.find(argv[2]);
            if (n != std::string::npos)
            {
                text.erase(n, std::string(argv[2]).length());
                text.insert(n, argv[3]);
                // std::cout << text << std::endl;
            }
            newfile << text << std::endl;
        }
        myfile.close();
        newfile.close();
    }
    else
        std::cout << "you should enter <filename> str1 str2" << std::endl;
    return (0);
}