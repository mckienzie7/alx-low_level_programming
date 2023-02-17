#include<stdio.h>
#include<time.h>
#include<stdlib.h>
/* more headers goes there */
/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Return: Always 0 (succes)
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
/* if  statment that print if the number is either zero,postive or negative */
if (n > 0)
printf("%d is positive\n", n);
else if (n == 0)
printf("%d is zer\no", n);
else
printf("%d is negative\n", n);
return (0);
}

