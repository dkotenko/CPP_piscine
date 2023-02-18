#ifndef CONVFLOAT_HPP
# define CONVFLOAT_HPP

# include <iostream>
# include <string>
# include "AConvType.hpp"

class ConvFloat : public AConvType
{

	public:

		ConvFloat();
		ConvFloat(char c);
		ConvFloat(int n);
		ConvFloat(double d);
		ConvFloat(std::string &s);
		ConvFloat( ConvFloat const & src );
		~ConvFloat();

		static bool isFloat(std::string &str);

		ConvFloat &		operator=( ConvFloat const & rhs );
		float m_value;
	private:

};

std::ostream &			operator<<( std::ostream & o, ConvFloat const & i );

#endif /* ******************************************************* CONVFLOAT_H */