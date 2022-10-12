#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - Iterates through an array and calls a function
 * @array: Array to iterate
 * @action: is a pointer to the function
 * @size: is the size of the array
 *
 * Return: Nothing.
**/
void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i;
if (array == NULL || action == NULL)
prints an integer

	return;

for (i = 0; i < size; i++)
	action(array[i]);

}
