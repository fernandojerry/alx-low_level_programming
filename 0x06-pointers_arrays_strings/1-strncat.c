#include "main.h"
/**
 * _strncat - concatenates two strings
 * @dest: gets parameter string
 * @src: gets parameter string
 * @n: number of iterations
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int s1;
	int s2;

	s1 = 0;

	while (dest[s1] != 0)
	{
		s1++;
	}

	s2 = 0;

	while (src[s2] != 0 && s2 < n)
	{
		dest[s1] = src[s2];
		s1++;
		s2++;
	}
	return (dest);
}
