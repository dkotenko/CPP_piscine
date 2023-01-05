#ifndef DOG_HPP
# define DOG_HPP

# include <iostream>
# include <string>
# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal
{

	public:

		Dog();
		Dog( Dog const & src );
		~Dog();
		void makeSound() const;
		Brain *getBrain(void) const;

		Dog &		operator=( Dog const & rhs );

	private:
		Brain *brain;

};

std::ostream &			operator<<( std::ostream & o, Dog const & i );

#endif
