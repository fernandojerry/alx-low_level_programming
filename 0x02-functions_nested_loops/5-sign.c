#include "main.h"
/**
 * print_sign - checks if n is greater or less than 0
 * @n: character to be checked
 * Return: 1 if n is greater than 0
 */
int print_sign(int n)
{
	int sign = 0;

	if (n > 0)
	{
		sign = 1;
		_putchar('+');
	}
	else if (n == 0)
	{
		sign = 0;
		_putchar('0');
	}
	else
	{
		sign = -1;
		_putchar('-');
	}
	return (sign);
}
