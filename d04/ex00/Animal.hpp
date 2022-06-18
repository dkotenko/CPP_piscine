#ifndef D04_ANIMAL_HPP
# define D04_ANIMAL_HPP

#include <iostream>

class Animal {
	protected:
		std::string type;

	public:
	Animal(std::string type);
	Animal(const Animal &animal);
	Animal();
	~Animal();

	Animal &operator=(const Animal & animal);
};

std::ostream& operator<<(std::ostream& os, Animal &animal);

#endif
