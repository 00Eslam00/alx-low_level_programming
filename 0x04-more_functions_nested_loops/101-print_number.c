#include "main.h"
#include <stdio.h>
/**
 * print_number - function here
 * @n: param
 * Return: 1 if it is lower
 * and return 0 else
 */


void print_number(int n)
{
unsigned int num = n;

if (n < 0)
{
_putchar('-');
num = -num;
}

if ((num / 10) > 0)
print_number(num / 10);

_putchar((num % 10) + '0');
}
