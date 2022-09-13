#include "main.h"
/**
 * main - Entry point
 * Description: Prints alphabet in lowercase
 * Return: 0
 */
void print_alphabet(void)
{
	char alph = 'a';

	while (alph <= 'z')
	{
		_putchar("%c", alph);
		alph++;
	}
	_putchar("\n");
}
