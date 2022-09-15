#include "main.h"
/**
* print_diagonal - Draws a diagonal line on the terminal
*
* Return: 0
*/
void print_diagonal(int n)
{
	int i;
	char j = '\\';

	for (i = 0; i <= n; i++)
	{
		if (i > 1)
		{
			_putchar(j++);
			_putchar(' ');
			_putchar('\n');
		}
		else
		{
			_putchar('\n');
		}
	}
}
