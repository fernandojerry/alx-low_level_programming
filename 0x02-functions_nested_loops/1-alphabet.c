#include "main.h"
/**
 * main - prints alphabet in lowercase, followed by a new line
 * Return: 0
 */
void print_alphabet(void)
{
	char alph = 'a';

	while (alph <= 'z')
	{
		_putchar(alph++);
	}
	_putchar('\n');
}
