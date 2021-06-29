#include "holberton.h"
/**
 * print_last_digit - function that prints last digit of number
 * @n: the in value that is being tested
 *
 * Return: 0 on success,
 */ 
int print_last_digit(int n)
{
	int last_digit = n % 10;
	if(last_digit < 0)
		last_digit *=-1;
	_putchar(last_digit + '0');
	return (last_digit);
}
