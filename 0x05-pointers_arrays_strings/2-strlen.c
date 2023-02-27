#include "main.h"

/**
 * _strlen - check the code length
 * @s: character passed
 * Return:Length;
 */

int _strlen(char *s)
{
	int len = 0;

	while ( *s != '\0')
	{
		len++;
		s++;
	}
	return len;

}
