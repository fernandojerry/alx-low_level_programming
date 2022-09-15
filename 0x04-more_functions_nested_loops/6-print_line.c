#include "main.h"
/**
* print_line - draws a straight line in the terminal
*
* Return: 0
*/
void print_line(int n)
{
	char c = '_';
	int a;

	for (a = 0; a <= n; n++)
	{
		if (n > 0)
			_putchar(c++);
		else
			_putchar('\n');
	}
}
	
