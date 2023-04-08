#include "main.h"

void simple_print_buffer(char *buffer, unsigned int size)
{
        unsigned int i;

        i = 0;
        while (i < size)
        {
                if (i % 10)
                {
                        printf(" ");
                }
                if (!(i % 10) && i)
                {
                        printf("\n");
                }
                printf("0x%02x", buffer[i]);
                i++;
        }
        printf("\n");
}

int main(void)
{
     char c;
     int i;
     int r;
     char *str;
     int len;
     char *ptr;
     char s1[98] = "Hello ";
     char s2[] = "World!\n";
     char buffer[98] = {0x00};
     char buffer2[98] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14};
     char *s = "hello";
     char *f;
     unsigned int n;
     char *t;
     
    _puts("\"At the end of the day, my goal was to be the best hacker\"\n\t- Kevin Mitnick");
    c = 'A';
    printf("%c: %d\n", c, _isupper(c));
    c = '0';
    printf("%c: %d\n", c, _isdigit(c));
    r = _isalpha('H');
    _putchar(r + '0');
    r = _abs(-1);
    printf("%d\n", r);
    str = "My first strlen!";
    len = _strlen(str);
    printf("%d\n", len);
    ptr = _strcpy(s1, "First, solve the problem. Then, write the code\n");
    printf("%s", s1);
    printf("%s", ptr);
    printf("%s\n", s1);
    printf("%s", s2);
    ptr = _strcat(s1, s2);
    printf("%s", s1);
    printf("%s", s2);
    printf("%s", ptr);
    printf("%s\n", s1);
    printf("%s", s2);
    ptr = _strncat(s1, s2, 1);
    printf("%s\n", s1);
    printf("%s", s2);
    printf("%s\n", ptr);
    for (i = 0; i < 98 - 1; i++)
    {
        s1[i] = '*';
    }
    s1[i] = '\0';
    printf("%s\n", s1);
    ptr = _strncpy(s1, "First, solve the problem. Then, write the code\n", 5);
    printf("%s\n", s1);
    printf("%s\n", ptr);
    printf("%d\n", _strcmp(s1, s2));
    printf("%d\n", _strcmp(s2, s1));
    printf("%d\n", _strcmp(s1, s1));
    simple_print_buffer(buffer, 98);
    _memset(buffer, 0x01, 95);
    printf("-------------------------------------------------\n");
    simple_print_buffer(buffer, 98);
    simple_print_buffer(buffer, 98);
    _memcpy(buffer + 50, buffer2, 10);
    printf("-------------------------------------------------\n");
    simple_print_buffer(buffer, 98);
    f = _strchr(s, 'l');

    if (f != NULL)
    {
        printf("%s\n", f);
    }
    s = "hello, world";
    f = "oleh";
    n = _strspn(s, f);
    printf("%u\n", n);
    t = _strpbrk(s, f);
    printf("%s\n", t);
    t = _strstr(s, f);
    if(t != NULL)
      printf("%s\n", t);
    return (0);
}
