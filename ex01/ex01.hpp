/*
** ex01.hpp for cpp_d15 in /home/rubysh/Work/Repositories/Epitech/SecondYear/Pool/cpp_d15/ex01/ex01.hpp
**
** Made by Anas Buyumad
** Login   <anas.buyumad@epitech.eu>
**
** Started on  Wed Jan 18 10:26:03 2017 Anas Buyumad
** Last update Wed Jan 18 10:26:04 2017 Anas Buyumad
*/

#ifndef CPP_D15_EX01_HPP
#define CPP_D15_EX01_HPP

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

#endif //CPP_D15_EX01_HPP
