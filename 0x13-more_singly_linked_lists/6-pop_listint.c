#include "lists.h"

/**
 * pop_listint - deletes the head node of a list
 *
 * @head: head of the list
 *
 * Return: returns the value of the deleted node
 */

int pop_listint(listint_t **head)
{
int n;
listint_t *next, *delNode;

if (!head || !(*head))
return (0);

delNode = *head;
next = (*head)->next;
*head = next;

n = delNode->n;
free(delNode);

return (n);
}
