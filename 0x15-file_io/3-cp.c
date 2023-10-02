#include "main.h"
/**
 * main - copies the content of a file to another file.
 * @argc: number of argumets
 * @argv: array ofstring argumets
 * Return: 1 if success, -1 if fail
 */
int main(int argc, char *argv[])
{
	int fd_r, fd_w, x, checker1, checker2;
	char buf[BUFSIZ];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd_r = open(argv[1], O_RDONLY);
	if (fd_r < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fd_w = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	while ((x = read(fd_r, buf, BUFSIZ)) > 0)
	{
		if (fd_w < 0 || write(fd_w, buf, x) != x)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			close(fd_r);
			exit(99);
		}
	}
	if (x < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	checker1 = close(fd_r);
	checker2 = close(fd_w);
	if (checker1 < 0 || checker2 < 0)
	{
		if (checker1 < 0)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_r);
		if (checker2 < 0)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_w);
		exit(100);
	}
	return (0);
}
