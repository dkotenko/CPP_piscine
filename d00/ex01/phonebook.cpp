#include <iostream>
#include <string>
#include "Contact.h"
#include <stdio.h>
#include <iomanip>

Contact addContact(int index) {
    const char *attributes[12] = {"first name", "last name", "nickname", \
        "login", "postal address", "email address", "phone number", "birthday date", \
        "favorite meal", "underwear color", "darkest secret", nullptr};
    std::string values[11];

    int i;
    for (i = 0; i < 11; i++) {
            std::string attr = attributes[i];
            std::cout << "Input " << attributes[i] << " : ";
            std::cin >> values[i];
        }
    Contact contact (index, values[0], values[1], values[2], values[3], values[4], \
    values[5], values[6], values[7], values[8], values[9], values[10]);
    return contact;
    }


void searchContact(Contact contacts[8], int index) {
    std::string inputIndex;

    for (int i = 0; i < 8; i++) {
        if (i >= index) {
            break ;
        }
        contacts[i].PrintContactShort();
    }
    std::cin >> inputIndex;

    if (inputIndex.length() != 1) {
        std::cout << "Invalid index, choose index in range 0-7" << std::endl ;
        return ;
    }
    if (!isdigit(inputIndex[0]) || inputIndex[0] < '0' || inputIndex[0] > '7') {
        std::cout << "Invalid index, choose index in range 0-7" << std::endl ;
        return ;
    }
    int currIndex = inputIndex[0] - '0';
    contacts[currIndex].PrintContactFull();
}
        

   // index, first name, last name and nickname.

void printUpperString(std::string s) {
    int length = s.length();

    for (int i=0; i < length; i++) {
        std::cout << (char)toupper(s[i]);
    }
}


int main (void)
{
    std::string userInput = "";
    int index = 0;
    Contact contacts[8];
    std::string values[11];
    
    while (true) {
        std::cin >> userInput;
        if (userInput.compare("EXIT") == 0) {
            exit(0);
        }
        else if (userInput.compare("ADD") == 0) {
            if (index > 7) {
                std::cout << "Cant add more contacts" << std::endl;
                continue ;
            }
            contacts[index] = addContact(index);
            index++;
        }
        else if (userInput.compare("SEARCH") == 0) {
            searchContact(contacts, index);
        }
    }
    return 0;
}

