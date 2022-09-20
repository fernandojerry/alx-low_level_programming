#include "main.h"
/**
* rev_string - check for code
*@s: reverse string
*Return: 0 (success)
*/
void rev_string(char *s)
{
	int j, i;
	char t;

	j = 0;
	while (*(s + j) != '\0')
		j++;
	j--;
	for (i = 0; i < j; i++)
	{
		t = *(s + j);
		*(s + j) = *(s + i);
		*(s + i) = t;
		j--;
	}
}
