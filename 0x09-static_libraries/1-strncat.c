#include <stdio.h>
#include "main.h"

/**
 * _strncat - function
 * @dest : param1
 * @src : param 2
 * @n : param 3
 *Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

char *_strncat(char *dest, char *src, int n)
{

	int size, i;

	size = 0, i = 0;

	while (*(dest + size))
		size++;

	while (*(src + i) && i < n)
		dest[size++] = src[i++];

	dest[size] = '\0';

	return (dest);
}
