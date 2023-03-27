#include <unistd.h>
#include "main.h"

/**
 * rev_string - function
 * @s: param1
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

void rev_string(char *s)
{

	int len, i;
	char temp;

	i = len = 0;
	while (*(s + len))
		len++;

	for (i = 0; i < len / 2; i++)
	{

		temp = *(s + i);
		*(s + i) = *(s + len - i - 1);
		*(s + len - i - 1) = temp;
	}
}
