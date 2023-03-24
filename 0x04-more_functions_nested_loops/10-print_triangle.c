#include "main.h"
/**
 * print_triangle - function here
 * @size: param
 * Return: 1 if it is lower
 * and return 0 else
 */


void print_triangle(int size)
{
int i, j;

for (i = 0; i < size; i++)
{
	for (j = 0; j < size - i - 1; j++)
	_putchar(' ');

	for (j = 0; j < i + 1 ; j++)
	_putchar('#');

	_putchar('\n');
}

if (size <= 0)
_putchar('\n');
}
