#pragma once

#include <stdbool.h>
#ifndef _Functions_H_
#define _Functions_H_

/*
* @brief Возводит число в квадрат
* @param value_ Число
* @return Квадрат числа
*/
unsigned long long Square(const long long value_);

bool IsPalindrome(const int number_);

int Reverse(const int number_);

int IsPrime(const unsigned long long number_);

#endif