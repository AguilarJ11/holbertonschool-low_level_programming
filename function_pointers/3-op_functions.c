#include "3-calc.h"

/**
 *op_add - suma
 *@a: entry int
 *@b: entry int
 *Return: resultado a + b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 *op_sub - resta
 *@a: entry int
 *@b: entry int
 *Return: resultado a - b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 *op_mul - multiplica
 *@a: entry int
 *@b: entry int
 *Return: resultado a * b
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 *op_div - division
 *@a: entry int
 *@b: entry int
 *Return: resultado a / b
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 *op_mod - resto de div
 *@a: entry int
 *@b: entry int
 *Return: resto de div entre a y b
 */

int op_mod(int a, int b)
{
	return (a % b);
}
