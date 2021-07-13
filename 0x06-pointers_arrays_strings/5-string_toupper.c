#include "holberton.h"
/**
 * string_toupper -  Function that changes all lowercase
 * letters of a string to uppercase
 * @string: Char string being inputted
 * Return: 0, if everything executes properly
 */
char *string_toupper(char *string)
{
	int i = 0;
	int j;

	while (string[i] !='\0')
			i++;

	for (j = 0; j < i; j++)
	{
		if (string[j] >= 97 && string[j] <= 122)
			string[j] = string[j] - 32;
	}
	return (string);
}
