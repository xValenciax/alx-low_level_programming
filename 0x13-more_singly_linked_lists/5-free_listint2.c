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
listint_t *curr, *next;

if (head == NULL)
return;

curr = *head;
while (curr)
{
next = curr->next;

free(curr);
curr = next;
}
*head = NULL;
}
