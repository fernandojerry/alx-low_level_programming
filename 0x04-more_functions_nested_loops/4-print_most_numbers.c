#include "main.h"
/**
 * print_most_numbers - prints the numbers interleaved
 *
 * Return: numbers
 */
void print_most_numbers(void)
{
	int c;

	for (c = 0; c <= 9; c++)
	{
		if (c == 2 || c == 4)
			continue;
		else
			break;
		_putchar('\n');
	}
}
