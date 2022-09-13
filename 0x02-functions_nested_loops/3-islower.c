#include "main.h"
/**
 * main - Entry piont
 * Description: Prints 1 if c islower else prints 0
 * Return: (int c)
 */
int _islower(int c)
{
	char c = 't';

	if (c == 116)
		_putchar("%d", 1);
	else
		_putchar("%d", 0);
	return (int c);
}
