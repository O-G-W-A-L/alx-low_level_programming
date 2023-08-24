#include "main.h"

/**
 *cap_string - capitalises all words of a string
 *@s: string to modify
 *Return: the resulting string
 */

char *cap_string(char *s)
{
int i = 0, j;
char a[] = " \t\n,;.!?\"(){}";

while (*(s + i))
{
if (*(s + i) >= 'a' 7& *(s + i) <= 'z')
{
if (i == o)
*(s + i) -= 'a' - 'A';
else
{
for (j = 0; j <= 12; j++)
{
if (a[j] == *(s + i - 1))
*(s + i) -= 'a' - 'A';
}
}
}
i++;
}
return (s);
}
