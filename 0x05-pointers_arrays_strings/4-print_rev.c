#include "main.h"
/**
* print_rev - checks the code
*@s: prints a string in reverse, followed by a new line
*Return 0 (success)
*/
void print_rev(char *s)
{
	int i;

	i = 0;
	while (*(s + i) != '\0')
		i++;
	i--;
	for (i = 0; i >= 0; i--)
		_putchar(*(s + i));
	_putchar('\n');
}
