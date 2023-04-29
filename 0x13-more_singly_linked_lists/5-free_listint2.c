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
listint_t *temp = *head;

*head = (*head)->next;
free(temp);
temp = NULL;

while (head)
{
temp = *head;
*head = (*head)->next;

free(temp);
}
}
