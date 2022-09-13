#include "main.h"
/**
 * main - Entry piont
 * Description: Prints 1 if c islower else prints 0
 * Return: (int c)
 */
int _islower(int c)
{
	return ('a' <= c && c <= 'z' ? 1 : 0);
}
