#include <stdio.h>
#include "main.h"
/**
 * jack_bauer - checks time
 * Return: no return value
 */
void jack_bauer(void)
{
	int hour = 0;
	int minute = 0;

	for (hour = 0; hour <= 24; hour++)
	{
		for (minute = 0; minute <= 60; minute++)
			printf("%0d:%0d", hour, minute);
		printf("\n");
	}
}
