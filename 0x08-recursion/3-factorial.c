#include "main.h"

/**
 * factorial - calcculate the factorial
 * @n: number
 * Return: Integer value
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);

	if (n <= 1)
		return (1);

	return (n * factorial(n - 1));
}
