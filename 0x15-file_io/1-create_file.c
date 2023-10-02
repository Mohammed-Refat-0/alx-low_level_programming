#include "main.h"
/**
 * create_file - creates a file and save it with text`
 * @filename: filename to create
 * @text_content: text to write in the file
 * Return: 1 if success, -1 if fail
 */
int create_file(const char *filename, char *text_content)
{
	int file;
	int checker;

	if (!filename)
	{
		return (-1);
	}

	file = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (file < 0)
	{
		return (-1);
	}
	if (text_content)
	{
		while (*text_content)
		{
			text_content++;
			checker = write(file, text_content, 1);
			if (checker != 1)
			{
				return (-1);
			}
		}
	}
	close(file);
	return (1);
}
