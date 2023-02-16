#ifndef CONVCHAR_HPP
# define CONVCHAR_HPP

# include <iostream>
# include <string>
# include "AConvType.hpp"

class ConvChar : public AConvType
{

	public:

		ConvChar();
		ConvChar( ConvChar const & src );
		~ConvChar();

		ConvChar &		operator=( ConvChar const & rhs );

	private:

};

std::ostream &			operator<<( std::ostream & o, ConvChar const & i );

#endif /* ******************************************************** CONVCHAR_H */