#ifndef CONVINT_HPP
# define CONVINT_HPP

# include <iostream>
# include <string>
# include <limits>
# include "AConvType.hpp"

# define CONV_INT_MAX std::numeric_limits<int>::max()
# define CONV_INT_MIN std::numeric_limits<int>::min()

class ConvInt : public AConvType
{

	public:

		ConvInt();
		ConvInt(std::string &s);
		ConvInt(char c);
		ConvInt(float f);
		ConvInt(double d);
		ConvInt( ConvInt const & src );
		~ConvInt();

		ConvInt &		operator=( ConvInt const & rhs );
		static bool isInt(std::string &s);
		int m_value;
	private:

};

std::ostream &			operator<<( std::ostream & o, ConvInt const & i );

#endif /* ********************************************************* CONVINT_H */