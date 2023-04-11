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

	if (str == NULL)
		return (0);

	while (*(str + i))
		i++;

	return (i);
}

/**
 * str_concat - check the code
 * @s1 : param
 * @s2 : param
 * Return: Always 0.
 */

char *str_concat(char *s1, char *s2)
{

	int size, i = 0, j = 0, k = 0;
	char *ptr;
	int size1 = _strlen(s1), size2 = _strlen(s2);

	size = _strlen(s1) + _strlen(s2);
	ptr = malloc(size * sizeof(char) + 1);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i <= size; i++)
	{
		if(i < size1)
			ptr[i] = s1[i];
		else
			ptr[i] = s2[i - size1];
	}

	ptr[i] = '\0';

	return (ptr);
}
