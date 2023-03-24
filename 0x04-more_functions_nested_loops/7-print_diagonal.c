#include "main.h"
/**
 * print_diagonal - function here
 * @n: param
 * Return: 1 if it is lower
 * and return 0 else
 */


void print_diagonal(int n)
{
int i, j;

for (i = 0 ; i < n ; i++)
{
for (j = 0 ; j < i ; j++)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
}

if (n <= 0)
_putchar('\n');
}
