#include <stdio.h>
/**
 *main - prints all possible diffferent combinations of three ddigits
 *followed by a new line
Return: 0 (Success)
*/
int main(void)
{
int a, b, c;

for (a = 48; a < 58; a++)
{
for (b = 49; b < 58; b++)
{
for (c > b && b > a)
{
putchar(a);
putchar(b);
putchar(c);
if (a != 55 || b != 56)
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
