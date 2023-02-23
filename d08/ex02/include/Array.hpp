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
			m_array(new T[0]) {};
		Array(unsigned int size) :
			m_size(size),
			m_array(new T[size]) {
				for (unsigned int i = 0; i < m_size; i++) {
					m_array[i] = 0;
				}
		};
		Array( Array const & src ) :
			m_size(src.m_size),
			m_array(new T[src.m_size]) {
				for (unsigned int i = 0; i < m_size; i++) {
					m_array[i] = src.m_array[i];
				}	
		};
		~Array() {
			if (m_array != NULL) {
				delete m_array;
			}
		};

		Array &		operator=( Array const & rhs ) {
			if (rhs.m_size != this->m_size) {
				delete m_array;
				m_size = rhs.m_size;
				m_array = new T[m_size];
			}
			for (unsigned int i = 0; i < m_size; i++) {
					m_array[i] = rhs.m_array[i];
			}
		};

		T& operator[](unsigned int i) {
			if (i > m_size - 1) {
				throw std::runtime_error("Exception: index out of bounds");
			}
			return m_array[i];
		};

		unsigned int size() {
			return m_size;
		};

		void print() {
			for (unsigned int i = 0; i < m_size; i++) {
					std::cout << m_array[i] << " ";
			}
			std::cout << std::endl;
		}

	private:
		unsigned int m_size;
		T *m_array;

};

#endif /* *********************************************************** ARRAY_H */