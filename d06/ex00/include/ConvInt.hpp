#ifndef CONVINT_HPP
# define CONVINT_HPP

# include <iostream>
# include <string>
# include "AConvType.hpp"

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