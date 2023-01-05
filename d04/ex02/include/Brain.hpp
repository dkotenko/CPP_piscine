#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
# include <string>

# define IDEAS_NUM 100

class Brain
{

	public:

		Brain();
		Brain( Brain const & src );
		~Brain();
		std::string ideas[IDEAS_NUM];

		Brain &		operator=( Brain const & rhs );

	private:

};

std::ostream &			operator<<( std::ostream & o, Brain const & i );

#endif /* *********************************************************** BRAIN_H */