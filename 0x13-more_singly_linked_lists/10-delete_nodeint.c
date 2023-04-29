#include "lists.h"

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
unsigned int i = 0;

if (!head || !(*head))
return (-1);

if (index == 0)
return (delete_nodeint_at_head(head));

temp = *head;
while (i < index - 1)
{
if (!temp->next)
return (-1);

temp = temp->next;
i++;
}

delNode = temp->next;
temp->next = delNode->next;
free(delNode);

return (1);
}
