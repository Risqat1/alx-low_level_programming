#include "lists.h"

/**
 * add_nodeint - new node added at the beginning of a linked list
 * @head: first node pointer
 * @n: insert data to the new mode
 * Return: 0
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *new;

new = malloc(sizeof(listint_t));
if (!new)
return (NULL);

new->n = n;
new->next = *head;
*head = new;

return (new);
}
