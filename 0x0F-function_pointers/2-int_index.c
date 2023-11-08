#include <stdio.h>
#include "function_pointers.h"
/**
 * int_index - function to search for an integer
 * @array: array holding the integer
 * @size: size of the array
 * @cmp: pointer to compare search
 *
 * Return: int element match, -1 if size <= 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
		return (-0);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
