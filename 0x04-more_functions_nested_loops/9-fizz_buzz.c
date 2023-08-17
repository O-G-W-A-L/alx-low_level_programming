#include "main.h"
#include <stdio.h>

/**
 *main - prints the numbers from 1 to 100, followed by a new line
 *but for multiples of three prints Fizz instead of the number
 *and for the multiples of five prints Buzz
 *for numbers which are both multiples of three annd five, print FizzBuzz
 *Return: Always 0 (Success)
 */

int main(void)
{
for (unsigned int i = 1; i <= 100; i++)
{
if (i % 15 == 0)
{
printf("FizzBuzz\n");
}
else if (i % 3 == 0)
{
printf("Fizz\n");
}
else if (i % 5 == 0)
{
printf("Buzz\n");
}
else
{
printf("%u\n", i);
}
}
return 0;
}
