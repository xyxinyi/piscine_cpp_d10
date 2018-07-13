#ifndef _EX03_HPP_
#define _EX03_HPP_

#include <iostream>

template <typename T>
void print(const T & variable)
{
	std::cout << variable << std::endl;
}

template <typename T>
void foreach(const T *array, void (*func)(const T& elem), const int &size)
{
	for (int iterator = 0 ; iterator < size ; iterator++) {
		func(array[iterator]);
	}
}

#endif 
