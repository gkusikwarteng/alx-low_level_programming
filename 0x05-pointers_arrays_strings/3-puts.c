#include "main.h"
/**
 * _puts - function to print a string and a new line
 * @str: parameter
 */

void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		_putchar (str[i]);
	_putchar ('\n');
}
