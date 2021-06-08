#ifndef CONTACT_H
#define CONTACT_H

#include <string>


class Contact {
        private:
                int index;
                std::string firstName;
                std::string lastName;
                std::string nickname;
                std::string login;
                std::string postalAddress;
                std::string emailAddress;
                std::string phoneNumber;
                std::string birthdayDate;
                std::string favoriteMeal;
                std::string underwearColor;
                std::string darkestSecret;

                void PrintAttribute(std::string attr);
        
        public:

                Contact();

                Contact(int index,
                        std::string firstName, std::string lastName, std::string nickname,
                        std::string login, std::string postalAddress, std::string emailAddress,
                        std::string phoneNumber, std::string birthdayDate, std::string favoriteMeal,
                        std::string underwearColor, std::string darkestSecret);

                int GetIndex() const;
                std::string GetFirstName() const;
                std::string GetLastName() const;
                std::string GetNickname() const;
                std::string GetLogin() const;
                std::string GetPostalAddress() const;
                std::string GetEmailAddress() const;
                std::string GetPhoneNumber() const;
                std::string GetBirthdayDate() const;
                std::string GetFavoriteMeal() const;
                std::string GetUnderwearColor() const;
                std::string GetDarkestSecret() const;
                void PrintContactShort();
                void PrintContactFull();
};

#endif
    