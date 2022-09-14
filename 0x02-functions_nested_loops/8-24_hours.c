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
			_putchar("%02d:%02d", hour, minute);
	}
}
