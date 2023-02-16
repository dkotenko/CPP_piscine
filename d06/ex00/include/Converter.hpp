#pragma once

# include <iostream>
# include <sstream>
# include <string>
# include <climits>
# include <cfloat>
# include "ConvChar.hpp"
# include "ConvInt.hpp"
# include "ConvFloat.hpp"
# include "ConvDouble.hpp"

class Converter
{

	public:
		Converter();
		Converter(char *literal);
		Converter( Converter const & src );
		~Converter();

		Converter &		operator=( Converter const & rhs );

	private:
		enum CastTypes {
			TYPE_CHAR,
			TYPE_INT,
			TYPE_FLOAT,
			TYPE_DOUBLE,
			TYPE_IMPOSSIBLE
		};

		std::string m_literal;
		ConvChar m_char;
		ConvInt m_int;
		ConvFloat m_float;
		ConvDouble m_double;

		int identify(std::string s);
};

std::ostream &			operator<<( std::ostream & o, Converter const & i );
