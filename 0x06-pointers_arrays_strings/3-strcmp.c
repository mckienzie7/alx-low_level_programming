#include "main.h"

/**
 * _strcmp - compare pointer
 * @s1: a pointer
 * @s2: another pointer
 * Return: str1 == str2 0. but another if else
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
