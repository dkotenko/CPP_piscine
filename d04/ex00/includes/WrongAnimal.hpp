#ifndef D04_WRONG_ANIMAL_HPP
# define D04_WRONG_ANIMAL_HPP

#include <iostream>

class WrongAnimal {
	protected:
        std::string type;
		std::string sound;

	public:
        WrongAnimal(std::string type);
        WrongAnimal(const WrongAnimal &animal);
        WrongAnimal();
        virtual ~WrongAnimal();
        const std::string getType(void) const;
		void makeSound() const;
        void print() const;

	WrongAnimal &operator=(const WrongAnimal & animal);

};

std::ostream& operator<<(std::ostream& os, WrongAnimal &animal);

#endif
