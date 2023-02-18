#ifndef CONVDOUBLE_HPP
# define CONVDOUBLE_HPP

# include <iostream>
# include <string>
# include "AConvType.hpp"

class ConvDouble : public AConvType
{

	public:

		ConvDouble();
		ConvDouble(std::string &s);
		ConvDouble(char c);
		ConvDouble(int n);
		ConvDouble(float f);
		ConvDouble( ConvDouble const & src );
		~ConvDouble();
		static bool isDouble(std::string &str);


		ConvDouble &		operator=( ConvDouble const & rhs );
		double m_value;
	private:

};

std::ostream &			operator<<( std::ostream & o, ConvDouble const & i );

#endif /* ****************************************************** CONVDOUBLE_H */