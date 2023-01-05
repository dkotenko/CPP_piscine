#include "Brain.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/


Brain::Brain()
{
	std::cout << "Brain constructed" << std::endl;
}

Brain::Brain( const Brain & src )
{
	for (int i = 0; i < IDEAS_NUM; i++) {
			ideas[i] = src.ideas[i];
		}
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Brain::~Brain()
{
	std::cout << "Brain destroyed" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Brain &				Brain::operator=( Brain const & rhs )
{
	if ( this != &rhs ) {
		for (int i = 0; i < IDEAS_NUM; i++) {
			ideas[i] = rhs.ideas[i];
		}
	}
	return *this;
}


/*
** --------------------------------- METHODS ----------------------------------
*/


/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */