#include "main.h"

/**
 * rev_string - check the code
 * @s: character
 * Return: string
 */

void rev_string(char *s)
{
	int i = 0;
	int aux = 0;
	char tmp;
	
	while (*(s + i) != '\0')
		i += 1;
	i -= 1;
	
	while (aux < 1)
	{
		tmp = s[i];
		s[i] = s[aux];
		s[aux] = tmp;
		aux++;
		i--;
	}
}
