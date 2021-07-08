#include "holberton.h"
/**
 * _strlen - function that returns the length of a string.
 * @s: the string that is being tested
 * Return: length of the string
 */
int _strlen(char *s)
{
	int length;

	for (length = 0; *s != '\0'; length++)
		s++;

	return (length);
}
