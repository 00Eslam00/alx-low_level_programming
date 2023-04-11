#include <unistd.h>
#include "main.h"

/**
 * _puts - function
 * @str: param1
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

void _puts(char *str)
{
	do {
		if (!*str)
			break;

		_putchar(*str);
	} while (*(++str));

	_putchar('\n');
}
