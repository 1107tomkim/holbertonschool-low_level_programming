#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - function to have 2 argv value multiplied
 * @argc: The num of arguments in command line
 * @argv: The arry of strings of args
 * Return: 1, if argc > 3 or argc == 2
 * and 0, if everything executes properly
 */
int main(int argc, char *argv[])
{
	int i;
	int j;
	int multi;

	if (argc > 3 || argc == 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		i = atoi(argv[1]);
		j = atoi(argv[2]);
		multi = i * j;

		printf("%d\n", multi);
	}
	return (0);
}
