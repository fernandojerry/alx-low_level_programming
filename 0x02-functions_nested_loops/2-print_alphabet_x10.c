#include "main.h"
/**
 * main - Entry point
 * Description: Prints 10 times the alphabet in lowercase
 * Return: no return value
 */
void print_alphabet_x10(void)
{
	int i = 10;
	char j = '\0';

	while (i < 10)
	{
		for (j = 'a'; j <= 'z'; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
}
