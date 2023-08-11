#include <stdio.h>

/**
 *main - prints all possible different combinations of two digits
 *Return: Always 0 (Success)
 */

int main(void)
{
  int a, b;
  for (a = 48; a <=56; n++)
    {
      for (b = 49; b <= 57; m++)
	{
	  if (b > a)
	    {
	      putchar(a);
	      putchar(b);
	      if (a != 56 || b != 57)
		{
		  putchar(',');
		  putchar(' ');
		}
	    }
	}
    }
  putchar('\n');
  return (0);
}
