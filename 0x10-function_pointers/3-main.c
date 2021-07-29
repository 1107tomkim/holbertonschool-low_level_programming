#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - function to call all functions
 * @argc: Arg numbers
 * @argv: Pointer pointing to Args
 * Return: 0, if everything executes properly
 */
int main(int argc, char *argv[])
{
	int num1;
	int num2;
	int (*result)(int, int);

	num1 = atoi(argv[1])
	num2 = atoi(argv[3])
	if (argc != 4 || argv[1] == NULL || argv[3] == NULL)
	{
		printf("Error\n");
		exit(98);
	}
}
