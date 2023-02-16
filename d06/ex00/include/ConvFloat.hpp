#ifndef CONVFLOAT_HPP
# define CONVFLOAT_HPP

# include <iostream>
# include <string>

class ConvFloat
{

	public:

		ConvFloat();
		ConvFloat( ConvFloat const & src );
		~ConvFloat();

		ConvFloat &		operator=( ConvFloat const & rhs );

	private:

};

std::ostream &			operator<<( std::ostream & o, ConvFloat const & i );

#endif /* ******************************************************* CONVFLOAT_H */