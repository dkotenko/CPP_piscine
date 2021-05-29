#include <string>
#include "Contact.h"
#include <stdio.h>
#include <iomanip>
#include <iostream>

Contact::Contact(){}

Contact::Contact(
    int index,
    std::string firstName, std::string lastName, std::string nickname,
    std::string login, std::string postalAddress, std::string emailAddress,
    std::string phoneNumber, std::string birthdayDate, std::string favoriteMeal,
    std::string underwearColor, std::string darkestSecret){

    Contact::index = index;
    Contact::firstName = firstName;
    Contact::lastName = lastName;
    Contact::nickname = nickname;
    Contact::login = login;
    Contact::postalAddress = postalAddress;
    Contact::emailAddress = emailAddress;
    Contact::phoneNumber = phoneNumber;
    Contact::birthdayDate = birthdayDate;
    Contact::favoriteMeal = favoriteMeal;
    Contact::underwearColor = underwearColor;
    Contact::darkestSecret = darkestSecret;
};



int Contact::GetIndex() const {
    return index;
}

void Contact::PrintAttribute(std::string attr) {

    int i = 0;

    if (attr.length() <= 10)
		std::cout << std::setw(10) << attr << "|";
	else
	{
		while (i < 9)
			std::cout << attr[i++];
		std::cout << "." << "|";
	}
}

void Contact::PrintContactFull() {
    {
	std::cout << "\n\x1B[93m" << "First name : " << "\033[0m" << Contact::GetFirstName() << std::endl;
	std::cout << "\x1B[93m" << "Last name : " << "\033[0m" << Contact::GetLastName() << std::endl;
	std::cout << "\x1B[93m" << "Nickname : " << "\033[0m" << Contact::GetNickname() << std::endl;
	std::cout << "\x1B[93m" << "Login : " << "\033[0m" << Contact::GetLogin() << std::endl;
	std::cout << "\x1B[93m" << "Adress : " << "\033[0m" << Contact::GetPostalAddress() << std::endl;
	std::cout << "\x1B[93m" << "Email : " << "\033[0m" << Contact::GetEmailAddress() << std::endl;
	std::cout << "\x1B[93m" << "Phone : " << "\033[0m" << Contact::GetPhoneNumber() << std::endl;
	std::cout << "\x1B[93m" << "Birthday : " << "\033[0m" << Contact::GetBirthdayDate() << std::endl;
	std::cout << "\x1B[93m" << "Favorite meal : " << "\033[0m" << Contact::GetFavoriteMeal() << std::endl;
	std::cout << "\x1B[93m" << "Underwear color : " << "\033[0m" << Contact::GetUnderwearColor() << std::endl;
	std::cout << "\x1B[93m" << "Dark secret : " << "\033[0m" << Contact::GetDarkestSecret() << std::endl;
}
}

void Contact::PrintContactShort() {
    std::cout << "|" << std::setw(10) << GetIndex() << "|";
    PrintAttribute(GetFirstName());
    PrintAttribute(GetLastName());
    PrintAttribute(GetNickname());
}

std::string Contact::GetFirstName() const {
    return firstName;
}

std::string Contact::GetLastName() const {
    return lastName;
}

std::string Contact::GetNickname() const {
    return nickname;
}

std::string Contact::GetLogin() const {
    return login;
}

std::string Contact::GetPostalAddress() const {
    return postalAddress;
}

std::string Contact::GetEmailAddress() const {
    return emailAddress;
}

std::string Contact::GetPhoneNumber() const {
    return phoneNumber;
}

std::string Contact::GetBirthdayDate() const {
    return birthdayDate;
}

std::string Contact::GetFavoriteMeal() const {
    return favoriteMeal;
}

std::string Contact::GetUnderwearColor() const {
    return underwearColor;
}

std::string Contact::GetDarkestSecret() const {
    return darkestSecret;
}

    