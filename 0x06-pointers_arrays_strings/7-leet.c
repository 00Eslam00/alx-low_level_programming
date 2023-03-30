#include <stdio.h>

/**
 * leet - function
 * @s : param1
 *Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

char *leet(char *s)
{

	char a[] = {'a', 'e', 'o', 't', 'l'};
	char n[] = {'4', '3', '0', '7', '1'};
	int i = 0, j = 0;

	while (s[i])
	{
		for (j = 0; j < 5; j++)
		{
			if (s[i] == a[j] || s[i] == a[j] - 32)
				s[i] = n[j];
		}

		i++;
	}

	return (s);
}
