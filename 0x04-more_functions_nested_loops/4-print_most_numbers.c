#include "main.h"
/**
 * print_most_numbers - function here
 * Return: 1 if it is lower
 * and return 0 else
 */


void print_most_numbers(void)
{
int i;

for (i = 0 ; i < 10 ; i++)
{
if (i != 2 && i != 4)
_putchar('0' + i);
}
_putchar('\n');
}
