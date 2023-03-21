#include "main.h"
/**
 * print_last_digit - function here
 * @n: parameter of function
 * Return: 1 if it is lower
 * and return 0 else
 */


int print_last_digit(int n)
{
	int r;

	r = n % 10;

	if (r < 0)
		r =  -r;
	_putchar('0' + r);
	return (r);
}
