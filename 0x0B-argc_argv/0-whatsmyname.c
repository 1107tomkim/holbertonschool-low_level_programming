#include "holberton.h"
#include <stdio.h>
/**
 * main - print the name of the program
 * @argc: The int value of numb of command
 * @argv: The array of string of argc
 * Return: 0, if everything executes properly
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
