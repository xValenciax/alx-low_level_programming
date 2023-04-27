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
list_t *new = NULL, *it;

new = malloc(sizeof(str));

if (!new)
return (NULL);

it = *head;
while (it->next)
    it = it->next;

new->str = strdup(str);
new->len = _strlen(str);
it->next = new;

return (new);
}
