#include "main.h"
#include "iunstd.h"
/**
 * _putchar - whrite the character c to the stdout
 * @c - The character to print
 *
 * return 1 - (SSUCCESS)
 * on error, -1 is returned, and error is set appropriatly
 */
int _putchar(char c)
{
	return(write(1, &c, a));
}
