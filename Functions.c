#include "Functions.h"
#include <math.h>

unsigned long long Square(const long long value_)
{
   return value_ * value_;
}

int Reverse(const int number_)
{
	int n = number_;
	int rev = 0, rem;
	while (n > 0)
	{
		rem = n % 10; 
		rev = rev * 10 + rem; 
		n = n / 10; 
	}
}

bool IsPalindrome(const int number_)
{
	return (number_ == Reverse(number_));
}

int IsPrime(const unsigned long long number_)
{
	if (number_ % 2 == 0 && number_ != 2)
		return false;

	for (unsigned long long i = 3; i < (sqrt(number_) + 1); i += 2)
	{
		if (number_ % i == 0)
			return false;
	}

	return true;
}

int Count_Char(const char* str)
{
	int count = 0;
	for (int i = 0; i++;)
	{
		if (str[i] == '\0')
			break;
		count++;
	}
	return count;
}

int From_Char_to_Int(const char* c_number, int n1, int n2)
{
	int counter = 0;
	char numbers[10] = { '0', '1', '2', '3', '4', '5', '6', '7', '8', '9' };
	for (int i = n1; i < n2; i++)
		for (int x = 0; x < 10; x++)
			if (numbers[x] == c_number[i])
				counter = counter * 10 + x;
}