/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-ayac <hel-ayac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 23:50:00 by hel-ayac          #+#    #+#             */
/*   Updated: 2022/04/17 23:50:01 by hel-ayac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
#define PHONEBOOK_H
#include <iostream>
#include <iomanip>

class Contact {
    private:
        std::string FirstName;
        std::string LastName;
        std::string NickName;
        std::string PhoneNumber;
        std::string DarkSecret;
    public:
        Contact(void);
        Contact(
            std::string firstName, 
            std::string lastName, 
            std::string nickName, 
            std::string phoneNumber, 
            std::string darkSecret
            );
        std::string getFirstName();
        std::string getLastName();
        std::string getNickName();
        std::string getPhoneNumber();
        std::string getDarkSecret();
        bool is_Empty();
};
class PhoneBook{
    private:
        Contact repo[8];
    public:
        static int index;
        PhoneBook();
        void Add();
        void Search(int i);
        void Exit();
};
std::string getInput(std::string title);
void    getUsage(void);
std::string    Print10(std::string str);
#endif