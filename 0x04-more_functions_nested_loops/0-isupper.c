#include "main.h"
/**
* _isupper - checks if character is uppercase
*
* Return: will return 1 if c is uppercase
* otherwise return 0
*/
int _isupper(int c)
{
	if ('A' < c && c < 'Z')
		return (1);
	else 
	{
		return (0);
	}
}
