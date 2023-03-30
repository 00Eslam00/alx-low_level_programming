#include <stdio.h>

/**
 * string_toupper - function
 * @str : param1
 *Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

char *string_toupper(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 97 && str[i] <= 122)
			str[i] = str[i] - ('a' - 'A');
		i++;
	}

	return (str);
}
