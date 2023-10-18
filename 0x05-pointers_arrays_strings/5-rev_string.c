#include "main.h"
/**
 * rev_string - the main function
 * @s: the parameter
 */
void rev_string(char *s)
{
	int i;
	int count;

	for (i = 0; s[i] != '\0'; i++)
		count++;
	for (i = 0; i < count / 2; i++)
	{
		char j;

		j = s[i];
		s[i] = s[count - 1 - j];
		s[count - 1 - i] = j;
	}
}
