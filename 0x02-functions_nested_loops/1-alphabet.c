#include "maih.h"
/* 
 * print alphabet -make the alphabet
 * return -  void
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
		putchar('\n');
	}
}
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	print_alphabet();
	return (0);
}
