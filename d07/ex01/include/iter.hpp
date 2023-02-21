#pragma once

#include <iostream>
#include <string>


template <typename T>
void iter(T *array, int length, void (*f)(T &))
{
	if (length <= 0 || array == nullptr || f == nullptr)
		return ;
	for (int i = 0; i < length; i++)
		f(array[i]);
}

template <typename T>
void pow2(T &d) {
	d *= d;
}


