#include "main.h"

/**
 * _islower - check the code
 * @c: The character to be checked
 * return : 1 lower case & 0 for else
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
