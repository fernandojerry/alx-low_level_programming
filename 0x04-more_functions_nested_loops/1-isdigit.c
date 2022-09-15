#include "main.h"
/**
* _isdigit - checks for a digit 0 through 9
*
* Return: this will return 1 if c is digit
* otherwise 0
*/
int _isdigit(int c)
{
	return (0 <= c && c <= 9 ? 1 : 0);
}
