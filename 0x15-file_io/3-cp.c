#include "main.h"
/**
 * main - copies the content of a file to another file.
 * @argc: number of argumets
 * @argv: array ofstring argumets
 * Return: 1 if success, -1 if fail
 */
int main(int argc, char *argv[])
{
	int fd_read, fd_write, i, checker1, checker2;
	char buffer[BUFSIZ];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd_read = open(argv[1], O_RDONLY);
	if (fd_read < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fd_write = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	while ((i = read(fd_read, buffer, BUFSIZ)) > 0)
	{
		if (fd_write < 0 || write(fd_write, buffer, i) != i)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			close(fd_read);
			exit(99);
		}
	}
	if (i < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	checker1 = close(fd_read);
	checker2 = close(fd_write);
	if (checker1 < 0 || checker2 < 0)
	{
		if (checker1 < 0)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_read);
		if (checker2 < 0)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_write);
		exit(100);
	}
	return (0);
}
