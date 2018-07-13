#ifndef _EX00_HPP_
#define _EX00_HPP_

template<typename T>
void swap(T &a, T &b)
{
	T docker;
	docker = a;

	a = b;
	b = docker;
}

template<typename T>
T min(T a, T b)
{
	if (a < b) {
		return a;
	}
	return b;
}

template<typename T>
T max(T a, T b)
{
	if (a > b) {
		return a;
	}
	return b;
}

template<typename T>
T add(T a, T b)
{
	return (a + b);
}

#endif 
