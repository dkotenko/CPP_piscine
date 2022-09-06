#ifndef WRONG_CAT_HPP
# define WRONG_CAT_HPP

# include <iostream>
# include <string>
# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	public:

		WrongCat();
		WrongCat( WrongCat const & src );
		~WrongCat();
		WrongCat &		operator=( WrongCat const & cat );
		void	makeSound() const;
	private:

};

std::ostream &			operator<<( std::ostream & o, WrongCat const & i );

#endif
