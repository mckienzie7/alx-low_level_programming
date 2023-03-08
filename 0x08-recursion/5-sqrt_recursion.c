#include "main.h"

int _sqrt(int i, int n);
/**
 * _sqrt_recursion - Entry point
 * @n: natural number
 * Return: natural integer
 */

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt - calculate 2 integer
 * @i: integer
 * @n: integer
 * Return: natural integer
 */

int _sqrt(int n, int i)
{
	int sqrt = i * i;

	if (sqrt > n)
		return (-1);

	if (sqrt == n)
		return (i);

	return (_sqrt(n, i + 1));
}
