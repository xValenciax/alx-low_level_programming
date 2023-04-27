#include "lists.h"

/**
 * _strlen - return the length of a string
 *
 * @s: string input
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
 * add_node - adds a new node at the beginning of a list
 *
 * @head: pointer to the start of the list
 * @str: new value to be inserted
 *
 * Return: address of the new element, or NULL (failure)
 */

list_t *add_node(list_t **head, const char *str)
{
list_t *new = malloc(sizeof(str));

if (!new)
return (NULL);

new->str = strdup(str);
new->len = _strlen(str);
new->next = *head;
*head = new;

return (new);
}
