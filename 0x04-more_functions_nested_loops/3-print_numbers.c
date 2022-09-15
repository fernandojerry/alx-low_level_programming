#include "main.h"
/**
* print_number - prints the number from 0 to 9
* followed by a new line
*
* Return: 0
*/
void print_numbers(void)
{
	int c = 0;

	while (c <= 9)
		_putchar(c++);
		_putchar('\n');
}
