#include "main.h"

/**
 * print_rev - reverse
 * @s: character passed
 * Return: Nothing
 */

void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	for (i = i -  1; 1 >= 0; i--)
		_putchar(s[i]);
	
	_putchar('\n');
}

