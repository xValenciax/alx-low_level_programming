#include "main.h"

/**
 * argstostr - concantenates all arguments passed to main
 *
 * @ac: number of arguments
 * @av: array containing arguments
 *
 * Return: pointer to char to the newly created string
 */

char *argstostr(int ac, char **av)
{
char *res;
int i = 0, j = 0, cnt = 0;
unsigned long int len = 0;

for (; i < ac; i++)
len += strlen(av[i]);

if (ac == 0 || av == NULL)
return (NULL);

res = malloc(len *sizeof(char) + ac);

if (res == NULL)
return (NULL);

for (i = 0; i < ac; i++)
{
j = 0;

while (*(av[i] + j) != '\0')
{
res[cnt] = *(av[i] + j);
j++;
cnt++;
}
res[cnt] = '\n';
cnt++;
}
res[cnt] = '\0';
return (res);
}
