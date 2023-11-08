#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - iterate an array
 * @array: array to use
 * @size: array size
 * @action: pointer to the array
 * Return: 0
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;
	for (i = 0; i < size; i++)
	{
		action(*array);
		array++;
	}
}
