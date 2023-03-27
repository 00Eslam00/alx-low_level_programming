#include <unistd.h>
#include "main.h"

/**
 * puts2 - function
 * @str: param1
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

void puts2(char *str)
{

	do {
		if (!*str)
			break;
		_putchar(*str);
		++str;

		if (!*str)
			break;
	} while (*(++str));


	_putchar('\n');
}
