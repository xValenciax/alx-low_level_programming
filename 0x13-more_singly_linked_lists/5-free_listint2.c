#include "lists.h"

/**
 * free_listint2 - frees a linked list
 *
 * @head: head of the list
 *
 * Return: always void
 */

void free_listint2(listint_t **head)
{
listint_t *curr = *head, *next;

if (head == NULL)
return;

while (curr)
{
next = curr->next;

free(curr);
curr = next;
}
*head = NULL;
}
