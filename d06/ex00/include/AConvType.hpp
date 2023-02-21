#ifndef ACONVTYPE_HPP
# define ACONVTYPE_HPP

# include <iostream>
# include <string>
# include <sstream>
# include <limits>
# include <cmath>
# include <cstdlib>
# include <cfloat>

# define CONST_IMPOSSIBLE "impossible"

class AConvType
{

	public:

		AConvType();
		AConvType( AConvType const & src );
		virtual ~AConvType() = 0;

		AConvType &		operator=( AConvType const & rhs );
		static bool areFloatsEqual(float f1, float f2);
		static bool areDoublesEqual(double f1, double f2);
		static bool isRoundFloat(float f);
		static bool isRoundDouble(double d);

		bool m_impossible;
		
	private:
};

std::ostream &			operator<<( std::ostream & o, AConvType const & i );

#endif /* ******************************************************* ACONVTYPE_H */