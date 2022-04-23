/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-ayac <hel-ayac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 02:43:28 by hel-ayac          #+#    #+#             */
/*   Updated: 2022/04/23 02:43:29 by hel-ayac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef HARL_H
# define HARL_H

# include <iostream>

class Harl
{
    private:
        void debug(void);
        void info(void);
        void warning(void);
        void error(void);
    public:
        Harl();
        ~Harl();
        void complain(std::string level);
};
# endif