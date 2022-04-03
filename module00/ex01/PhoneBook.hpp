#ifndef PHONEBOOK_H
#define PHONEBOOK_H
#include <iostream>

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
void    Print10(std::string str);
#endif