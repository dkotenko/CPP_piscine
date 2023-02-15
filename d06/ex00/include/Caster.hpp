#ifndef CASTER_HPP
# define CASTER_HPP

# include <iostream>
# include <string>

class Caster
{

	public:

		Caster();
		Caster( Caster const & src );
		~Caster();

		Caster &		operator=( Caster const & rhs );

	private:
		std::string m_literal;

};

std::ostream &			operator<<( std::ostream & o, Caster const & i );

#endif /* ********************************************************** CASTER_H */