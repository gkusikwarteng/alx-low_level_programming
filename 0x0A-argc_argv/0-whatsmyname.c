#include <stdio.h>
#include "main.h"

/**
 * main - shows the name of the program run
 * @argc: number of arguments in program
 * @argv: array of argument
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	(void)argc;

	printf("%s\n", *argv[0]);

	return (0);
}
