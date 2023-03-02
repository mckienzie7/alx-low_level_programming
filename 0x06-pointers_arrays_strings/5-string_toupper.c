#include "main.h"

/**
 * string_toupper - change all lower case
 * of string to upper case.
 * @str: string of lower case to be changed.
 * Return: A ponter chaged
 *
 */

char *string_toupper(char *str)
{
	int index = 0;

	while (str[index])
	{
		if (str[index] >= 'a' && str[index] <= 'z')
			str[index] -= 32;
		index++;
	}
	return (str);
}
