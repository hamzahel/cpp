/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-ayac <hel-ayac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 23:49:52 by hel-ayac          #+#    #+#             */
/*   Updated: 2022/04/18 01:13:43 by hel-ayac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

Contact::Contact()
{
    this->FirstName = "";
    this->LastName = "";
    this->NickName = "";
    this->PhoneNumber = "";
    this->DarkSecret = "";
}

Contact::Contact( 
    std::string firstName, 
    std::string lastName, 
    std::string nickName, 
    std::string phoneNumber, 
    std::string darkSecret
    )
{
    this->FirstName = firstName;
    this->LastName =lastName;
    this->NickName = nickName;
    this->PhoneNumber = phoneNumber;
    this->DarkSecret = darkSecret;
    
}

std::string Contact::getFirstName()
{
    return (this->FirstName);
}

std::string Contact::getLastName()
{
    return (this->LastName);
}

std::string Contact::getNickName()
{
    return (this->NickName);
}

std::string Contact::getPhoneNumber()
{
    return (this->PhoneNumber);
}

std::string Contact::getDarkSecret()
{
    return (this->DarkSecret);
}

bool Contact::is_Empty()
{
    return (
        this->FirstName.empty() ||
        this->LastName.empty() ||
        this->NickName.empty() ||
        this->PhoneNumber.empty() ||
        this->DarkSecret.empty()
    );
}

// class PhoneBook
PhoneBook::PhoneBook(){}

int  PhoneBook::index = 0;

void PhoneBook::Add()
{
    std::string firstName;
    std::string lastName;
    std::string nickName; 
    std::string phoneNumber;
    std::string darkSecret;

    firstName = getInput("first name ");
    lastName = getInput("last name ");
    nickName = getInput("nick name ");
    phoneNumber = getInput("phone number ");
    darkSecret = getInput("darket secret ");
    this->repo[PhoneBook::index] = Contact(
        firstName,
        lastName,
        nickName,
        phoneNumber,
        darkSecret);
    if (PhoneBook::index >= 0 && PhoneBook::index <= 8)
        PhoneBook::index++;
}

void PhoneBook::Search(int i)
{
    Contact c = this->repo[i];
    if (!c.is_Empty())
    {
        std::cout << std::setw(11) << "index|";
        std::cout << std::setw(11) << "fist name|";
        std::cout << std::setw(11) << "last name|";
        std::cout << std::setw(11) << "nick name|" << std::endl;
        std::cout << std::setw(11) << std::to_string(i) + "|";
        std::cout << std::setw(11) << Print10(c.getFirstName()) + "|";
        std::cout << std::setw(11) << Print10(c.getLastName()) + "|";
        std::cout << std::setw(11) << Print10(c.getNickName()) + "|" << std::endl;
    }
    else
        std::cout << "Search Result : 0" << std::endl;
}

//handler function for usage and inputs
std::string getInput(std::string title)
{
    std::string tmp;
    if (title != "")
        std::cout << "please enter your " << title << std::endl;
    std::getline (std::cin, tmp);
    while(tmp.empty())
        {
            if (title != "")
                std::cout << "your " << title << " is required " << std::endl;
            else
                getUsage();  
            std::getline (std::cin, tmp);
        }
    return (tmp);
}

std::string Print10(std::string str)
{    
    if (str.length() > 9)
    {
        str.erase(9 , str.length());
        str.insert(9 , "." ,1);
        return str;
    }
    return str;
}

void    getUsage()
{
    std::cout << "\nplease enter" << std::endl;
    std::cout << "[ADD SEARCH EXIT]\n\n";
}

bool is_digits(const std::string str)
{
    return str.find_first_not_of("0123456789") == std::string::npos;
}

int main(void)
{
    std::string command;
    std::string index;
    PhoneBook phonebook;
    
    std::cout << "Welcome to PhoneBook" << std::endl;

    while (1)
    {
        getUsage();
        command = getInput("");
        if (command.compare("ADD") == 0)
        {
            phonebook.Add();
        }
        else if (command.compare("SEARCH") == 0)
        {
            index = getInput("index: ");
            if (is_digits(index))
                phonebook.Search(stoi(index));
            else
                std::cout << "Search Result : 0" << std::endl;
        }
        else if (command.compare("EXIT") == 0)
        {
            std::cout << "good bye" << std::endl;
            exit(0);
        }
    }
    return (0);
}