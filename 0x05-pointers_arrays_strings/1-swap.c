#include "main.h"

/**
 * swap_int - change the code by pointer
 * @a - integer number
 * @b - number
 * Return: Nothing
 */

void swap_int(int *a, int *b)
{
	 int p;

	 p = *a;
	 *a = *b;
	 *b = p;
}
