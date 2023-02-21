#include "main.h"

/**
 * _isalpha - check code
 * @c: character
 * Return: 1 for lower case and upper case  alphabet or 0 for anything else
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}
