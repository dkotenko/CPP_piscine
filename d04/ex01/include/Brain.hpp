#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
# include <string>

# define IDEAS_NUM 100

class Brain
{

	public:

		Brain();
		Brain(std::string idea);
		Brain( Brain const & src );
		~Brain();
		std::string ideas[IDEAS_NUM];

		Brain &		operator=( Brain const & rhs );
		void setIdeaByIndex(std::string idea, int index);
	private:

};

std::ostream &			operator<<( std::ostream & o, Brain const & i );

#endif /* *********************************************************** BRAIN_H */