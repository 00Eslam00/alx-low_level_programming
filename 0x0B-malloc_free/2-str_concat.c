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

	while (str[i] != '\0')
		i++;

	return (i);
}

/**
 * str_concat - check the code
 * @s1 : param
 * @s2 : param
 * Return: pointer
 */

char *str_concat(char *s1, char *s2)
{

	int size1, size2, i;
	char *ptr;

	if (s1 == NULL)
		s1  = "\0";
	if (s2 == NULL)
		s2 = "\0";

	size1 = _strlen(s1);
	size2 =  _strlen(s2);
	ptr = malloc((size1 + size2) * sizeof(char) + 1);

	if (ptr == 0)
		return (0);

	for (i = 0; i <= size1 + size2; i++)
	{
		if (i < size1)
			ptr[i] = s1[i];
		else
			ptr[i] = s2[i - size1];
	}

	ptr[i] = '\0';

	return (ptr);
}
