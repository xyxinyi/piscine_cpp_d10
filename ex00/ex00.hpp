/*
** ex00.hpp for cpp_d15 in /home/rubysh/Work/Repositories/Epitech/SecondYear/Pool/cpp_d15/ex00/ex00.hpp
**
** Made by Anas Buyumad
** Login   <anas.buyumad@epitech.eu>
**
** Started on  Wed Jan 18 10:12:53 2017 Anas Buyumad
** Last update Wed Jan 18 10:12:53 2017 Anas Buyumad
*/

#ifndef CPP_D15_EX00_HPP
#define CPP_D15_EX00_HPP

template<typename T>
void	swap(T &a, T &b)
{
  T	docker;
  docker = a;

  a = b;
  b = docker;
}

template<typename T>
T	min(T a, T b)
{
  if (a < b) {
    return a;
  }
  return b;
}

template<typename T>
T	max(T a, T b)
{
  if (a > b) {
    return a;
  }
  return b;
}

template<typename T>
T	add(T a, T b)
{
  return (a + b);
}

#endif //CPP_D15_EX00_HPP