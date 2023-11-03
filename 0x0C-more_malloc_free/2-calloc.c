#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _calloc - main function
 *
 * @nmemb: number of block of memory
 * @size: size of the parameter (int)
 *
 * Return: void pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	size_t i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(nmemb * size);
	if (p == NULL)
		return (NULL);
	for  (i = 0; i < (nmemb * size); i++)
		p[i] = 0;
	return (p);
}
