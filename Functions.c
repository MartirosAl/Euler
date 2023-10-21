#include "Functions.h"

unsigned long long Square(const long long value_)
{
   return value_ * value_;
}

int Reverse(const int number_)
{
	int last_digit = 0;
	int norm_number = number_;
	int reverse_number = 0;
	while (norm_number > 0)
	{
		last_digit = norm_number % 10;
		reverse_number = reverse_number * 10 + last_digit;
		norm_number /= 10;
	}
	return reverse_number;
	// 1234
	// reverse_number = 0.1;
	// last_digit = 4
	// reverse_number = reverse_number * 10 + last_digit
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
