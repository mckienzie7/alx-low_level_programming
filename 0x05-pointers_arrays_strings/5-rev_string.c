#include "main.h"

/**
 * rev_string - check the code
 * @s: character
 * Return: string
 */

void rev_string(char *s)
{
	char rv = s[0];
	int c = 0, i;

	while (s[c] != '\0')
	{
		c++;
		for (i = 0; i < c; i++)
		{
			c--;
			rv = s[i];
			s[i] = s[c];
			s[c] = rv;
		}
	}
}
