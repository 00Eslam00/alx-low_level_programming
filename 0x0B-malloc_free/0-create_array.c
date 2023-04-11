#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - check the code
 * @size : 1st param
 * @c : 2nd param
 * Return: Always 0.
 */

char *create_array(unsigned int size, char c)
{

	unsigned int i;
	char *ptr = (char *)malloc(sizeof(char) * size);

	if (ptr == NULL || size == 0)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		ptr[i] = c;
	}

	return (ptr);
}
