#include "lists.h"

/**
 * listint_len - prints the length of a linked list
 *
 * @h: head of the list
 *
 * Return: number of nodes in a list
 */

size_t listint_len(const listint_t *h)
{
int len = 0;

while (h)
{
h = h->next;
len++;
}

return (len);
}

/**
 * delete_nodeint_at_head - deletes head node of a list
 *
 * @head: head of the list
 *
 * Return: 1 (Success), -1 (Failure)
 */
int delete_nodeint_at_head(listint_t **head)
{
listint_t *temp;

if (!head || !(*head))
return (-1);

temp = *head;
*head = (*head)->next;
free(temp);
return (1);
}

/**
 * delete_nodeint_at_index - deletes node at index
 *
 * @head: head of the list
 * @index: index of node to be deleted
 * Return: 1 (Success), -1 (Failure)
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *temp, *delNode;
unsigned int i = 0, len;

if (!head || !(*head))
return (-1);

if (index == 0)
return (delete_nodeint_at_head(head));

len = listint_len(*head);

if (index > len)
return (-1);

temp = *head;

while (i < index - 1)
temp = temp->next, i++;

delNode = temp->next;
temp->next = delNode->next;
free(delNode);

return (1);
}
