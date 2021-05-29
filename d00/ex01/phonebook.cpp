#include <iostream>
#include <string>
#include "Contact.h"
#include <stdio.h>
#include <iomanip>

Contact addContact(void) {

    std::string attributes[] = {"first name", "last name", "nickname", \
        "login", "postal address", "email address", "phone number", "birthday date", \
        "favorite meal", "underwear color", "darkest secret", NULL};
    std::string values[11];

    int i = -1;
    for (std::string attr = attributes[i]; attr.compare(NULL) != 0; i) {
            std::cout << "Input " << attributes[i] << " : ";
            std::cin >> values[i];
        }
    
    Contact contact (i, values[0], values[1], values[2], values[3], values[4], \
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
    if (!isdigit(inputIndex[0]) || inputIndex[0] < '1' || inputIndex[0] > '7') {
        std::cout << "Invalid index, choose index in range 0-7" << std::endl ;
        return ;
    }
    contacts[(int)inputIndex[0]].PrintContactFull();
}
        

   // index, first name, last name and nickname.



int main (int argc, char* argv[])
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
        else if (userInput.compare("ADD")) {
            if (index > 7) {
                std::cout << "Cant add more contacts" << std::endl;
                continue ;
            }
            contacts[index++] = addContact();
        }
        else if (userInput.compare("SEARCH")) {
            searchContact(contacts, index);
        }

    }
    int i = 0;

    if (argc == 1) {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    }
    else {
        while (++i < argc - 1)
        {
            printUpperString(argv[i]);
        }
        std::cout << std::endl;
    }
    return 0;
}