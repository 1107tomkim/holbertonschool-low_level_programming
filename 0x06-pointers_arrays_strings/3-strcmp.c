#include "holberton.h"
/**
 * _strcmp - Function that compares two strings
 * @s1: Char pointer being inputted
 * @s2: Char pointer being inputted
 * Return: 0, if everything executes properly
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int j;

	while (s1[i] != '\0')
	{
		if (s1[i] == s2[i])
		{
			j = s1[i] - s2[i];
			i++;
		}
		else
		{
			j = s1[i] - s2[i];
			break;
		}
	}
	return (j);
}
