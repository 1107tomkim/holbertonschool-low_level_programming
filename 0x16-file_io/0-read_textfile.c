#include "holberton.h"
/**
 * read_textfile - Function that reads a text file
 * and prints it to the POSIX stdout
 * @filename: name of file
 * @letters: leters to be read and printed
 * Return: 0 on success
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int f, rf, wf;
	char *buff = malloc(letters * sizeof(char));

	if (filename == NULL)
		return (0);

	f = open(filename, O_RDWR);
	if (f == -1)
		return (0);

	rf = read(f, buff, letters);
	if (rf == -1)
		return (0);

	wf = write(STDOUT_FILENO, buff, rf);
	if (wf == -1)
		return (0);

	close(f);
	free(buff);
	return (wf);
}

