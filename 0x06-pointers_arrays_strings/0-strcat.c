#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: gets parameter string
 * @src: gets parameter string
 *
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int s1;
	int s2;

	s1 = 0;

	while (dest[s1] != 0)
	{
		s1++;
	}

	s2 = 0;

	while (src[s2] != 0)
	{
		dest[s1] = src[s2];
		s1++;
		s2++;
	}
	return (dest);
}
