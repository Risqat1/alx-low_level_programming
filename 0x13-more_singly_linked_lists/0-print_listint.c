#include "lists.h"

/**
 * print_listint - elements pinted of a linked list
 * @h: linked list of type listint_t
 * Return: 0
 */
size_t print_listint(const listint_t *h)
{
 size_t num = 0;

 while (h)
 {
 printf("%d\n", h->n);
 num++;
 h = h->next;
 }

 return (num);
}
