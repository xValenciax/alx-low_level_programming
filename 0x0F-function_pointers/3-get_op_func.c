#include "3-calc.h"

/**
 * get_op_func - selects the correct function to perform
 *
 * @s: the operator the determines the function
 *
 * Return: a pointer to a function that takes 2 ints and returns an int
 */

int (*get_op_func(char *s))(int, int)
{
op_t ops[] = {
{"+", op_add},
{"-", op_sub},
{"*", op_mul},
{"/", op_div},
{"%", op_mod},
{NULL, NULL}
};
int i;

i = 0;

while (i < 5)
{
if (strlen(s) == 1 && ops[i].op[0] == s[0])
return (ops[i].f);
i++;
}

return (ops[i].f);
}
