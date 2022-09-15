#include "main.h"
/**
* most_number - prints number from 0 to 9
* except 2 and 4
*
* Return: 0
*/
void print_most_numbers(void)
{
	int c;

	for (c = 0; c <= 9; c++)
	{
		if (c == 2 || c == 4)
			continue;
		else
			break;
		_putchar('\n');
	}
}
