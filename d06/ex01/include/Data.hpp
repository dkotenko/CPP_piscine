#ifndef DATA_HPP
# define DATA_HPP

# include <iostream>
# include <string>
#include <cstdint>

class Data
{

	public:

		Data();
		Data( Data const & src );
		~Data();

		Data &		operator=( Data const & rhs );
		static uintptr_t serialize(Data* ptr);
		Data* deserialize(uintptr_t raw);
		char m_char;
		int m_integer;
		float m_float;
		double m_double;
	private:

};

std::ostream &			operator<<( std::ostream & o, Data const & i );

#endif /* ************************************************************ DATA_H */