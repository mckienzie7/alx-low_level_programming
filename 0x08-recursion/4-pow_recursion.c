#include "main.h"

/**
 * _pow_recursion - return the value of x and y
 * @x: value multiple
 * @y: value multiple
 * Return: integer
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1);
			}
