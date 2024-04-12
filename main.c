#include <stdio.h>
#include "Functions.h"
#include "Euler.h"

#define SIZE 2

int main()
{
   /*unsigned int number = 0;
   printf("number = ");
   scanf_s("%du", &number);

   unsigned int multiples[SIZE];
   printf("multiples = ");
   for (unsigned int i = 0; i < SIZE; ++i)
      scanf_s("%du", &multiples[i]);

   printf("%llu", Problem_1(number, multiples, SIZE));
   

   unsigned int number = 0;
   printf("number = ");
   scanf_s("%du", &number);

   printf("%llu", Problem_2(number));
   */

  /* unsigned int number = 0;
   printf("number = ");
   scanf_s("%du", &number);
   unsigned long long number_ = 600851475143;
   printf("%u", Problem_5(20));*/

   	/*
	unsigned int number;
	printf("Enter number:");
	scanf_s("%u", &number);

	printf("Difference is: %u\n", problem6(number));
	*/

	//unsigned int number;
	//printf("Enter number: ");
	//scanf_s("%u", &number);

	//printf("%ust prime is: %u\n", number, Problem_7(number));

   char* str = "";
   printf("Enter number: ");
   gets(&str);

   printf("Max product is: %llu\n", Problem_8(str));
   return;
}
