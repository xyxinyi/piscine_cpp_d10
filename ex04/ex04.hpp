/*
** ex04.hpp for cpp_d15 in /home/rubysh/Work/Repositories/Epitech/SecondYear/Pool/cpp_d15/ex04/ex04.hpp
**
** Made by Anas Buyumad
** Login   <anas.buyumad@epitech.eu>
**
** Started on  Wed Jan 18 14:10:55 2017 Anas Buyumad
** Last update Wed Jan 18 14:10:55 2017 Anas Buyumad
*/

#ifndef CPP_D15_EX04_HPP
#define CPP_D15_EX04_HPP

#include <string>

template <typename T> bool equal(const T & a, const T & b);

template <class T> class Tester
{

public:

  Tester();
  ~Tester();
  bool	equal(const T &a, const T&b) const;
};


#endif //CPP_D15_EX04_HPP
