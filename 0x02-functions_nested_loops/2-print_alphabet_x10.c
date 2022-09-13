#include "main.h"
/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowecase
 *
 * Return: no return
 */
void print_alphabet_x10(void)
{
	int i = 10;
	char j;

	while (i--)
	{
		for (j = 'a'; j <= 'z'; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
}
