#include "3-calc.h"

/**
 * main - prints the result of a mathematical operation on 2 integers
 *
 * @argc: count of arguments
 * @argv: array containing arguments values
 *
 * Return: 0 (Success), 98 (invalid arguments count), 99 (invalid op),
 * 100 (invalid mathematical operation)
 */
int main(int argc, char *argv[])
{
int num1, num2;
int (*operation)(int, int);
char *op;

if (argc != 4)
printf("Error\n"), exit(98);

if (argv[argc - 1][0] == '0' &&
(argv[2][0] == '/' || argv[2][0] == '%'))
printf("Error\n"), exit(100);

num1 = atoi(argv[1]), num2 = atoi(argv[argc - 1]);
op = argv[2];

operation = get_op_func(op);

if (!operation)
printf("Error\n"), exit(99);

printf("%d\n", operation(num1, num2));
return (0);
}

