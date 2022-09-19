#include "main.h"
/**
* _puts - print a string followed by a new line
*@str: string to print
*Return: Nothing
*/
void _puts(char *str)
{
	int i = 0;

	while (*(str + 1) != 0)
	{
		i++;
		_putchar(str[i]);
	}
	_putchar('\n');
}
