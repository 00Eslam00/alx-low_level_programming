#include <unistd.h>

/**
 * _strlen - function
 * @s: param1
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int _strlen(char *s)
{
	int i;

	i = 0;
	while (*(s++))
		i++;

	return (i);
}
