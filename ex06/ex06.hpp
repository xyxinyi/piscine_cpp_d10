/*
** EPITECH PROJECT, 2018
** CPP Pool Day 15
** File description:
** ex06
*/

#if !defined (EX06_HPP_)
	#define EX06_HPP_

	#include <sstream>
	#include <string>
	#include <typeinfo>

template <typename T>
static std::string toString(T const &value __attribute__((unused)))
{
	std::ostringstream oss;
	oss << "[???]";
	return oss.str();
}

static std::string toString(int const &value) __attribute__((unused));
static std::string toString(float const &value) __attribute__((unused));
static std::string toString(std::string const &value) __attribute__((unused));

static std::string toString(int const &value)
{
	std::ostringstream oss;
	oss << "[int:" << value << "]";
	return oss.str();
}

static std::string toString(float const &value)
{
	std::ostringstream oss;
	oss << "[float:" << value << "f]";
	return oss.str();
}

static std::string toString(std::string const &value)
{
	std::ostringstream oss;
	oss << "[string:\"" << value << "\"]";
	return oss.str();
}

template <typename T, typename U = T>
struct Tuple {
	T a;
	U b;

	std::string toString() const
	{
		std::ostringstream oss;
		oss << "[TUPLE " << ::toString(a) <<
			" " << ::toString(b) << "]";
		return oss.str();
	}
};

#endif /* !defined (EX06_HPP_) */
