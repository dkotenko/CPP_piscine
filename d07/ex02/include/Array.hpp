#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <string>

template <typename T>
class Array
{

	public:
		Array() :
			m_size(0),
			m_array(nullptr);
		Array(unsigned int size) :
			m_size(size),
			m_array(new T[size]) {
				for (unsigned int i = 0; i < size; i++) {
					m_array[i] = 0;
				}
		};
		Array( Array const & src ) :
			m_size(src.m_size),
			m_array(new T[src.m_size]) {
				for (unsigned int i = 0; i < size; i++) {
					m_array[i] = src.m_array[i];
				}	
			}
		~Array();

		Array &		operator=( Array const & rhs );

	private:
		unsigned int m_size;
		T *m_array;

};

std::ostream &			operator<<( std::ostream & o, Array const & i );

#endif /* *********************************************************** ARRAY_H */