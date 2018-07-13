/*
** ex03.hpp for cpp_d15 in /home/rubysh/Work/Repositories/Epitech/SecondYear/Pool/cpp_d15/ex03/ex03.hpp
**
** Made by Anas Buyumad
** Login   <anas.buyumad@epitech.eu>
**
** Started on  Wed Jan 18 13:56:33 2017 Anas Buyumad
** Last update Wed Jan 18 13:56:33 2017 Anas Buyumad
*/

#ifndef CPP_D15_EX03_HPP
#define CPP_D15_EX03_HPP

#include <iostream>

template <typename T>
void	print(const T & variable)
{
  std::cout << variable << std::endl;
}

template <typename T>
void	foreach(const T *array, void (*func)(const T& elem), const int &size)
{
  for (int iterator = 0 ; iterator < size ; iterator++) {
    func(array[iterator]);
  }
}

#endif //CPP_D15_EX03_HPP
