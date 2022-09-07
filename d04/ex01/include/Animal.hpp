#ifndef D04_ANIMAL_HPP
# define D04_ANIMAL_HPP

#include <iostream>

class Animal {
	protected:
        std::string type;
		std::string sound;

	public:
        Animal(std::string type);
        Animal(const Animal &animal);
        Animal();
		virtual ~Animal();
        const std::string &getType(void) const;
		virtual void makeSound() const;
		void print() const;

	Animal &operator=(const Animal & animal);

};

std::ostream& operator<<(std::ostream& os, Animal &animal);
std::ostream& operator<<(std::ostream & o, const Animal *i );

#endif
