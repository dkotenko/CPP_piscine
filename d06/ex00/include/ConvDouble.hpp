#ifndef CONVDOUBLE_HPP
# define CONVDOUBLE_HPP

# include <iostream>
# include <string>

class ConvDouble
{

	public:

		ConvDouble();
		ConvDouble( ConvDouble const & src );
		~ConvDouble();

		ConvDouble &		operator=( ConvDouble const & rhs );

	private:

};

std::ostream &			operator<<( std::ostream & o, ConvDouble const & i );

#endif /* ****************************************************** CONVDOUBLE_H */