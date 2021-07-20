#include "holberton.h"
#include <stdio.h>
/**
 * main - function that prints how many
 * arguments are in the command line
 * @argc: The number of args
 * @argv: Void in this function
 * Return: 0 , if everything executes properly
 */
int main(int argc, char *argv[])
{
	(void)argv;


	printf("%d\n", argc - 1);
	return (0);
}
