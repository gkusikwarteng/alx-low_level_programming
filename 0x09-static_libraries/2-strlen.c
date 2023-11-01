#include "main.h"
/**
 * _strlen - function to count strings
 * @s: first parameter
 * Return: the length of the string
 */

int _strlen(char *s)
{
	int i;
	int j = 0;

	for (i = 0; s[i] != '\0'; i++)
		j++;
	return (j);
}
