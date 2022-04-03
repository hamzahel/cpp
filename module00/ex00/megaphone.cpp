/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-ayac <hel-ayac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 19:12:01 by hel-ayac          #+#    #+#             */
/*   Updated: 2022/03/28 20:52:45 by hel-ayac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int argc, char **argv)
{
    int i;
    int y;
    
    i = 1;
    y = 0;
    if (argc == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    else
    {    while (argv[i])
        {
            while (argv[i][y])
            {
                std::cout << (char) std::toupper(argv[i][y]);
                y++;
            }
            y = 0;
            i++;
        }
        std::cout << std::endl;
    }
    return (0);
}