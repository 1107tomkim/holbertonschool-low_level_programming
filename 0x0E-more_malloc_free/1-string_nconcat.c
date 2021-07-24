#include "holberton.h"
#include <stdlib.h>
/**
 * string_nconcat - Function that concatenates
 * two strings.
 * @s1: first string being concatted
 * @S2: second string being concatted
 * @n: int value of needed space
 * @return: concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i;
	unsigned int j;
	unsigned int k;
	char *newstr = NULL;
	
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++);

	for (j = 0; s2[j] != '\0'; j++);

	if (j <= n)
		n = j;

	newstr = malloc(sizeof(char) * (i + n + 1));

	if (newstr == NULL)
		return (NULL);

	for (k = 0; s1[k] != '\0'; k++)
		newstr[k] = s1[k];

	for (k = 0; k < n; k++)
		newstr[k + i] = s2[k];

	newstr[k + i] = '\0';

	return (newstr);
}
