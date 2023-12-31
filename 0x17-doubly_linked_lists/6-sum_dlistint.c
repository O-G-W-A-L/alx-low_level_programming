#include "lists.h"

/**
 * sum_dlistint - sum element of a dbl
 * @head: the head of doubly linked list
 * Return: the sum or 0
 */

int sum_dlistint(dlistint_t *head)
{
int sum = 0;

if (head == NULL)
{
return (0);
}
while (head != 0)
{
sum += head->n;
head = head->next;
}
return (sum);
}
