#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen - check the code
 * @str : 1st param
 * Return: Always 0.
 */

int _strlen(char *str)
{
	int i = 0;

	while (*(str + i))
		i++;

	return (i);
}

/**
 * _strdup - check the code
 * @str : 1st param
 * Return: Always 0.
 */

char *_strdup(char *str)
{
	int size;
	char *ptr;
	int i = 0;

	if (str == NULL)
		return (NULL);

	size = _strlen(str);

	ptr = malloc(size * sizeof(char) + 1);

	if (ptr == NULL)
		return (NULL);

	while (*(str + i))
	{
		ptr[i] = str[i];
		i++;
	}

	ptr[i] = '\0';
	return (ptr);
}
