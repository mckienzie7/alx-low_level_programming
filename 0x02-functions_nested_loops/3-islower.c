#include "main.h"

/**
 * _islower - check the code
 * @c: The character to be checked
 * Return: 1 for the lower case chracter or 0 for anytthing else
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
