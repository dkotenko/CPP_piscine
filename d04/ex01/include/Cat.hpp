#ifndef CAT_HPP
# define CAT_HPP

# include <iostream>
# include <string>
# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal
{
	public:

		Cat();
		Cat( Cat const & src );
		~Cat();
		void makeSound() const;
		Brain *getBrain(void);
		Cat &		operator=( Cat const & cat );

	private:
		Brain *brain;

};

std::ostream &			operator<<( std::ostream & o, Cat const & i );

#endif
