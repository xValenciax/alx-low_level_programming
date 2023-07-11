#include "main.h"

/**
 * main - check the code
 *
 * @argc: count of program arguments
 * @argv: array of arguments
 *
 * Return: always 0
 */

int main(int argc, char *argv[])
{
int fdt, fdf, tret, fret;
char buff[BUFF_SIZE];
ssize_t bytes_r;

if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97);
}

fdf = open(argv[1], O_RDONLY);
if (fdf == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
exit(98);
}
fdt = open(argv[2], O_WRONLY | O_TRUNC | O_CREAT,
S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
if (fdt == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
exit(99);
}

while ((bytes_r = read(fdf, &buff[0], BUFF_SIZE)))
write(fdt, &buff[0], bytes_r);

fret = close(fdf);
if (fret == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fret);
exit(100);
}
tret = close(fdt);
if (tret == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", tret);
exit(100);
}
exit(0);
}
