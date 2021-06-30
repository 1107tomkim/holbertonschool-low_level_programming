#include <stdio.h>

/**
 * main - program that prints the alphabet in lowercase, except q and e
 * Return: 0, if everything executes properly
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter != 'e' && letter != 'q')
			putchar(letter);
	}
	putchar('\n');
	return (0);
}
