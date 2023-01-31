#include "Brain.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/


Brain::Brain()
{
	std::cout << "Brain constructed" << std::endl;
}

Brain::Brain(std::string idea)
{
	for (int i = 0; i < IDEAS_NUM; i++) {
		ideas[i] = idea;
	}
	std::cout << "Brain constructed" << std::endl;
}

Brain::Brain( const Brain & src )
{
	*this = src;
	std::cout << "Brain constructed by copy" << std::endl;
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

/* ************************************************************************** */