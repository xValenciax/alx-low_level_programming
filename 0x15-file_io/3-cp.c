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
ssize_t bytes_r, bytes_w;

if (argc != 3)
dprintf(STDERR_FILENO, ERR_USAGE), exit(97);

fdf = open(argv[1], O_RDONLY);
if (fdf == -1)
dprintf(STDERR_FILENO, ERR_NOREAD, argv[1]), exit(98);

fdt = open(argv[2], O_WRONLY | O_TRUNC | O_CREAT,
S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);

if (fdt == -1)
dprintf(STDERR_FILENO, ERR_NOWRITE, argv[2]), exit(99);


while ((bytes_r = read(fdf, &buff[0], BUFF_SIZE)) > 0)
{
bytes_w = write(fdt, &buff[0], bytes_r);
if (bytes_w != bytes_r)
dprintf(STDERR_FILENO, ERR_NOWRITE, argv[2]), exit(99);
}

if (bytes_r == -1)
dprintf(STDERR_FILENO, ERR_NOREAD, argv[1]), exit(98);

fret = close(fdf);
if (fret == -1)
dprintf(STDERR_FILENO, ERR_NOCLOSE, fret), exit(100);

tret = close(fdt);
if (tret == -1)
dprintf(STDERR_FILENO, ERR_NOCLOSE, tret), exit(100);

exit(EXIT_SUCCESS);
}
