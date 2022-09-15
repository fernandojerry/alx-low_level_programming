#include "main.h"
/**
* more_numbers - prints 10 times the numbers
* from 0 to 14 followed by a new line
*
* Return: 0
*/
void more_numbers(void)
{
	int i = 1;
	int j;

	while (i <= 10)
	{
		_putchar('\n');
		j = 0;

		while (j <= 14)
		{
			_putchar(j++);
		}

	}
}
