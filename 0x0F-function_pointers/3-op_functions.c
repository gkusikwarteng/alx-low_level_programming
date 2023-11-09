#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - the sum of two numbers
 * @a: first parameter
 * @b: the second parameter
 * Return: sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - the difference of two numbers
 * @a: first parameter
 * @b: the second parameter
 * Return: difference of a and b
 */
int op_sub(int a, int b)
{
	        return (a - b);
}

/**
 * op_mul - the product of two numbers
 * @a: first parameter
 * @b: the second parameter
 * Return: product of a and b
 */
int op_mul(int a, int b)
{
                return (a * b);
}

/**
 * op_div - the division of two numbers
 * @a: first parameter
 * @b: the second parameter
 * Return: quotient of a and b
 */
int op_div(int a, int b)
{
                return (a / b);
}

/**
 * op_mod - the remainder of two numbers
 * @a: first parameter
 * @b: the second parameter
 * Return: remainder of a and b
 */
int op_mod(int a, int b)
{
                return (a % b);
}
