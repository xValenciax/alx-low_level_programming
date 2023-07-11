#include "main.h"

/**
 * _strlen - return the length of a string
 *
 * @s: string
 *
 * Return: the length of string s
 */

int _strlen(char *s)
{
int len;

for (len = 0; *s != '\0'; len++)
s++;

return (len);
}

/**
 * append_text_to_file - appends new text to an existing file
 *
 * @filename: path of the file
 * @text_content: text to be appended
 *
 * Return: 1 (Success), -1 (Failure)
 */

int append_text_to_file(const char *filename, char *text_content)
{
int fd;
ssize_t bytes;

if (!filename)
return (-1);

fd = open(filename, O_RDWR | O_APPEND);

if (!text_content)
{
if (fd == -1)
return (-1);
return (1);
}

bytes = write(fd, text_content, _strlen(text_content));

if (bytes == -1)
return (-1);

return (1);
}
