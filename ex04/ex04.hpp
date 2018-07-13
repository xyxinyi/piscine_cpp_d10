#ifndef _EX04_HPP_
#define _EX04_HPP_

#include <string>

template <typename T> bool equal(const T & a, const T & b);

template <class T> class Tester
{

public:

	Tester();
	~Tester();
	bool equal(const T &a, const T&b) const;
};


#endif 
