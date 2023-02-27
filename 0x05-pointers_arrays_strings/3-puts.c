#include "main.h"

/**
 * _puts - puts the string
 * @str: string character
 * Return: something
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
