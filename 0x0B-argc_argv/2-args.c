#include "holberton.h"
#include <stdio.h>
/**
 * main - function to print all args it receives
 * @argc: Num of argument passed
 * @argv: Array of string of the args passed
 * Return: 0, if everything executed properly
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}
