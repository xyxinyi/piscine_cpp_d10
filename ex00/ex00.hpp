/*
** EPITECH PROJECT, 2018
** CPP Pool Day 15
** File description:
** ex00
*/

#if !defined (EX00_HPP_)
	#define EX00_HPP_

template <typename T>
void swap(T &a, T &b)
{
	T tmp;

	tmp = a;
	a = b;
	b = tmp;
}

template <typename T>
T min(T a, T b)
{
	return a < b ? a : b;
}

template <typename T>
T max(T a, T b)
{
	return a > b ? a : b;
}

template <typename T>
T add(T a, T b)
{
	return a + b;
}

#endif /* !defined (EX00_HPP_) */
