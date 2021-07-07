#include <stdio.h>

/**
 * main - Program that prints alphabet in lowercase, and then in uppercase
 * Return: 0 if everything works properly
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);

	for (letter = 'A'; letter <= 'Z'; letter++)
		putchar(letter);

	putchar('\n');

		return (0);
}
