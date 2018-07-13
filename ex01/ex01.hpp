#ifndef _EX01_HPP_
#define _EX01_HPP_

#include <cstring>

template <typename T>
int	compare(T const &a, T const &b)
{
	if (a == b) {
		return 0;
	}
	if (a < b) {
		return -1;
	}
	return 1;
}

template<> int compare<const char *>(char const * const &a, char const * const &b)
{
	if (std::strcmp(a, b) == 0) {
		return 0;
	}
	if (std::strcmp(a, b) < 0) {
		return -1;
	}
	return 1;
}

#endif 
