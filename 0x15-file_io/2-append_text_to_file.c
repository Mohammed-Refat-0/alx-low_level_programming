#include "main.h"
/**
 * append_text_to_file - appends text at the end of a file
 * @filename: filename to append to
 * @text_content: text to append to the file
 * Return: 1 if success, -1 if fail
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file;
	int checker;

	if (!filename)
	{
		return (-1);
	}

	file = open(filename, O_WRONLY | O_APPEND);
	if (file < 0)
	{
		return (-1);
	}
	if (text_content)
	{
		while (*text_content)
		{
			checker = write(file, text_content, 1);
			if (checker != 1)
			{
				return (-1);
			}
			text_content++;
		}
	}
	close(file);
	return (1);
}
