#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strcpy - function
 * @dest: array
 * @src: size
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

char *_strcpy(char *dest, char *src)
{
	int len, i;

	len = 0;
	while (*(src + len))
		len++;

	for (i = 0; i < len; i++)
		dest[i] = src[i];

	dest[i] = '\0';
	return (dest);
}
