#ifndef CONVCHAR_HPP
# define CONVCHAR_HPP

# include <iostream>
# include <string>
# include "AConvType.hpp"

class ConvChar : public AConvType
{

	public:

		ConvChar();
		ConvChar(std::string &s);
		ConvChar(int n);
		ConvChar(float f);
		ConvChar(double d);
		ConvChar( ConvChar const & src );
		~ConvChar();
		static bool isChar(std::string &str);
		bool isCharPrintable(char c);

		ConvChar &		operator=( ConvChar const & rhs );
		char m_value;
	private:

};

std::ostream &			operator<<( std::ostream & o, ConvChar const & i );

#endif /* ******************************************************** CONVCHAR_H */