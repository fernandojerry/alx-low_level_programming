#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - return sum of numbers
 * @n: The number of arguments
 * Return: Always 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list valist;
	int sum;
	unsigned int i;

	sum = 0;
	va_start(valist, n);
	if (n == 0)
		return (0);
	for (i = 0; i < n; i++)
		sum += va_arg(valist, int);

	return (sum);
}
