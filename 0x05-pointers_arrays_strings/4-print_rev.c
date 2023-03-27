#include <unistd.h>
#include "main.h"

/**
 * print_rev - function
 * @s: param1
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

void print_rev(char *s)
{

	while (*(s++))
	{
	}
	s--;
	while (*(--s))
	{
		_putchar(*s);
	}
	_putchar('\n');
}
