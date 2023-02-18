#ifndef CONVINT_HPP
# define CONVINT_HPP

# include <iostream>
# include <string>
# include "AConvType.hpp"

class ConvInt : public AConvType
{

	public:

		ConvInt();
		ConvInt( ConvInt const & src );
		~ConvInt();

		ConvInt &		operator=( ConvInt const & rhs );

	private:
		int m_value;

};

std::ostream &			operator<<( std::ostream & o, ConvInt const & i );

#endif /* ********************************************************* CONVINT_H */