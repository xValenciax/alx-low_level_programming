#include "lists.h"

/**
 * free_list - frees a list_t
 *
 * @head: head of the list
 *
 * Return: always void
 */

void free_list(list_t *head)
{
list_t *temp;

while (head)
{
temp = head;
head = head->next;
free(temp->str);
free(temp);
}
}
