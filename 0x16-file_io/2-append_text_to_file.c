#include "holberton.h"
/**
 * append_text_to_file - function that appends
 * text at the end of a file
 * @filename: Name of file
 * @text_content: Content inside file
 * Return: 1 if everything executes properly, else -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file, len, count;

	if (filename == NULL)
		return (-1);

	file  = open(filename, O_RDWR | O_APPEND);
	if (file == -1)
		return (-1);

	if (text_content == NULL)
		return (1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len] != '\0'; len++)
			;
		count = write(file, text_content, len);
		if (count == -1)
			return (-1);
	}
	close(file);
	return (1);
}
