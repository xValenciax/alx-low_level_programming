#include "lists.h"

/**
 * _strlen - return the length of a string
 *
 * @s: string
 *
 * Return: the length of string s
 */

int _strlen(const char *s)
{
int len;

for (len = 0; *s != '\0'; len++)
s++;

return (len);
}


/**
 * add_node_end - adds a new node at the end of a list_t
 *
 * @head: pointer to the head of the list
 * @str: string value to be added
 *
 * Return: address to the new element
 */

list_t *add_node_end(list_t **head, const char *str)
{
list_t *new, *temp;

new = malloc(sizeof(list_t));

if (!new)
return (NULL);

new->str = strdup(str);
new->len = _strlen(str);

if (!(*head))
{
(*head) = new;
(*head)->next = NULL;
}

else
{
temp = *head;
while (temp && temp->next)
temp = temp->next;

temp->next = new;
temp->next->next = NULL;
}

return (new);
}
