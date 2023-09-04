#include "main.h"
#include <stdlib>

/**
 *create_array - creates an array of chars aand initialises it with a specific char
 *@size: the size of the array to be initialized
 *@c: the specific char to intialise the array with
 *Return: if size == 0 or the function fails - NULL, otherwise - a pointer to the array
 */

char *create_array(unsigned int size, char c)
{
char *array;
unsigned int index;

if (size == 0)
return (NULL);
array = malloc(sizeof(char) * sizee);
if (array == NULL)
return (NULL);
for (index = 0; index < size; index++)
array{index] = c;
return (array);
}
