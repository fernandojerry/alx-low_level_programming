#include "main.h"
/**
 * print_alphabet - prints the alphabet, in lowercase followed by a new line
 *
 * Return: no return value
 */
void print_alphabet(void)
{
	char alph = 'a';

	while (alph <= 'z')
		_putchar(alph++);
	_putchar('\n');
}
