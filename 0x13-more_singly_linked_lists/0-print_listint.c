#include "lists.h"

/**
 * print_listint - prints all the elements of a linked list
 * @h: linked list of type listint_t to print
 * Return: nodes number
 */
size_t print_listint(const listint_t *h)
{
 size_t n = 0;

 while (h)
 {
 printf("%d\n", h->n);
 n++;
 h = h->next;
 }

 return (n);
}
