#ifndef ACONVTYPE_HPP
# define ACONVTYPE_HPP

# include <iostream>
# include <string>

class AConvType
{

	public:

		AConvType();
		AConvType( AConvType const & src );
		virtual ~AConvType() = 0;

		AConvType &		operator=( AConvType const & rhs );

	private:
		bool m_impossible;

};

std::ostream &			operator<<( std::ostream & o, AConvType const & i );

#endif /* ******************************************************* ACONVTYPE_H */