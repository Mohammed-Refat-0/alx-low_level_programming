#include "main.h"
#include <stdlib.h>
/**
 * read_textfile - eads a text file and prints it to the POSIX standard output.
 * @filename: file to read from
 * @letters: number of letters to read
 * Return:  actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	unsigned long count = 0;
	char c;
	int checker;
	int file;

	if (!filename)
	{
		return (0);
	}
	file = open(filename, O_RDONLY);
	if (file < 0)
	{
		return (0);
	}
	while (read(file, &c, 1))
	{
		if (count == letters)
		{
			return (count);
		}
		checker = write(STDOUT_FILENO, &c, 1);
		if (checker != 1)
		{
			return (0);
		}
		count++;
	}
	close(file);
	return (count);
}
