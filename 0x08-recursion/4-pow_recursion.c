#include "main.h"

/**
 * _pow_recursion - returns the value of x raised to the powerof y
 *@x: the number to be raised
 *@y: the power
 *Return: the value of the x raised to the power of y
 */

int _pow_recursion(int x, int y)
{
int result = x;
if (y < 0)
return (-1);
else if (y == 0)
return (1);
result *= _pow_recursion(x, y - 1);
return (result);
}
