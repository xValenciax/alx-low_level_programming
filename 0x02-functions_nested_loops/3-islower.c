/**
 * _islower - checks whether char is lower or upper case
 *
 * @c: character to be checked
 *
 * Return: 1 if char is lowercase, 0 otherwise
 */

int _islower(int c)
{
if (c >= 65 && c <= 90)
return (0);
return (1);
}
