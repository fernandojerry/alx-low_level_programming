#include "main.h"
/**
* puts2 - print one char out of 2 of a string
*@str: string to print
*Return: Nothing
*/
void puts2(char *str)
{
	int len;
	char i;

	for (len = 0; *(str + len) != 0; len++)
	{
		if (len % 2 == 0)
		{
			i = *(str + len);
			_putchar(i);
		}
	}
	_putchar('\n');
}
