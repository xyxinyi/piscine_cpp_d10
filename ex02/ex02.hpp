/*
** ex02.hpp for cpp_d15 in /home/rubysh/Work/Repositories/Epitech/SecondYear/Pool/cpp_d15/ex02/ex02.hpp
**
** Made by Anas Buyumad
** Login   <anas.buyumad@epitech.eu>
**
** Started on  Wed Jan 18 10:42:43 2017 Anas Buyumad
** Last update Wed Jan 18 10:42:43 2017 Anas Buyumad
*/

#ifndef CPP_D15_EX02_HPP
#define CPP_D15_EX02_HPP

#include <iostream>

template <typename T>
T	min(const T &a, const T &b)
{
  std::cout << "template min" << std::endl;
  if (a <= b) {
    return a;
  }
  return b;
}

int	min(const int &a, const int &b)
{
  std::cout << "non-template min" << std::endl;
  if (a <= b) {
    return a;
  }
  return b;
}

template <typename T>
T	templateMin(const T *array, int size) {
  T smallest;

  if (!size) {
    return 0;
  }
  smallest = array[0];
  if (size == 1) {
    return smallest;
  }
  for (int iterator = 1; iterator < size; iterator++) {
    smallest = min<T>(smallest, array[iterator]);
  }
  return smallest;
}

int	nonTemplateMin(const int *array, int size) {
  int smallest;

  if (!size) {
    return 0;
  }
  smallest = array[0];
  if (size == 1) {
    return smallest;
  }
  for (int iterator = 1; iterator < size; iterator++) {
    smallest = min(smallest, array[iterator]);
  }
  return smallest;
}

#endif //CPP_D15_EX02_HPP
