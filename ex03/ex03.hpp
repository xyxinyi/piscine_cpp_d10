/*
** EPITECH PROJECT, 2018
** CPP Pool Day 15
** File description:
** ex03
*/

#if !defined (EX03_HPP_)
	#define EX03_HPP_

	#include <iostream>
	#include <stdexcept>

template <typename T>
void foreach(T const *array, void (&func)(const T &elem), size_t size)
{
	if (!array)
		throw std::runtime_error("Null pointer.");
	for (size_t i = 0; i < size; i++)
		func(array[i]);
}

template <typename T>
void print(const T &elem)
{
	std::cout << elem << std::endl;
}

#endif /* !defined (EX03_HPP_) */
