#include "holberton.h"
/**
 * create_file - function that creates a file with the
 * given contents
 * @filename: The name of the file
 * @text_content: The contents insisde the file
 * Return: 1 if everything executes properly, and -1 on fail
 */
int create_file(const char *filename, char *text_content)
{
	int file, len, count;

	if (filename == NULL)
		return (-1);

	file = open(filename, O_RDWR | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (file == -1)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len] != '\0'; len++)
			;
			count = write(file, text_content, len);
	}
	if (count == -1)
		return (-1);

	close(file);
	return (-1);
}
