#include "holberton.h"
/**
 * leet - Function that encodes a string
 * into 1337
 * @string: Char string being inputted
 * Return: Char
 */
char *leet(char *string)
{
	char alpha[] = "AaEeOoTtLl";
	char num[] = "4433007711";
	int i;
	int j;

	for (i = 0; string[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (string[i] == alpha[j])
				string[i] = num[j];
		}
	}
	return (string);
}
