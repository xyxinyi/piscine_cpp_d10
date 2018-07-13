#ifndef EX6CPP15
#define EX6CPP15

#include <string>
#include <sstream>

template <typename T>
std::string	getType(T value)
{
	std::stringstream output;

	(void) value;
	output << "[???]";
	return output.str();
};

template<> std::string getType(int value)
{
	std::stringstream	output;

	output << "[int:" << value << "]";
	return output.str();
};

template<> std::string getType(float value)
{
	std::stringstream	output;

	output << "[float:" << value << "f]";
	return output.str();
};

template<> std::string getType(std::string value)
{
	std::stringstream	output;

	output << "[string:\"" << value.c_str() << "\"]";
	return output.str();
};

template <typename T, typename U = T>
struct Tuple
{
public:
	T a;
	U b;
	std::string	toString() const {
		std::stringstream output;
		std::string stringA = getType<T>(a);
		std::string	stringB = getType<U>(b);

		output << "[TUPLE " << stringA.c_str() << " " << stringB.c_str() << "]";
		return output.str();
	};
};

#endif
