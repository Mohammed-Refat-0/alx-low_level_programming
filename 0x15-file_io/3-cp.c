#include "main.h"
/**
 * main - copies the content of a file to another file.
 * @argc: number of argumets
 * @argv: array ofstring argumets
 * Return: 1 if success, -1 if fail
 */
int main(int argc, char *argv[])
{
	int fileto;
	int filefrom;
	char buffer[1024];
	int checker1;
	int checker2;
	int checker3;
	int checker4;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_t\n");
		exit(97);
	}
	filefrom = open(argv[1], O_RDONLY);
	if (filefrom < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fileto = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fileto < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to NAME_OF_THE_FILE %s\n", argv[2]);
		exit(99);
	}

	while ((checker1 = read(filefrom, buffer, 1024)) > 0)
	{
		if (checker1 < 0)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}
		checker2 = write(fileto, buffer, 1024);
		if (checker1 != checker2)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	checker3 = close(filefrom);
	checker4 = close(fileto);
	if (checker3 < 0 || checker4 < 0)
	{
		if (checker3 < 0)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", filefrom);
		if (checker4 < 0)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fileto);
		exit(100);
	}
	return (0);
}
