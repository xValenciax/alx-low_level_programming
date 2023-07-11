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

int create_file(const char *filename, char *text_content)
{
  int fd;
  ssize_t bytes;

  if (!filename)
    return (-1);

  if (!text_content)
    {
      fd = creat(filename, S_IRUSR | S_IWUSR);
      if (fd == -1)
	return (-1);
      return (1);
    }

  fd = open(filename, O_WRONLY | O_TRUNC | O_CREAT, S_IRUSR | S_IWUSR);
  if (fd == -1)
    return (-1);

  bytes = write(fd, text_content, _strlen(text_content));
  if (bytes == -1)
    return (-1);

  return (1);
}
