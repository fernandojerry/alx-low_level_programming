#include "main.h"
/**
 * _isalpha - checks if character is lower or upper case
 * @c: character to be checked
 * Return: 1 if lower or upper case, 0 otherwise
 */
int _isalpha(int c)
{
	return(('a' <= c && c <= 'z') || ('A' <= c && c <= 'Z') ? 1 : 0);
}
