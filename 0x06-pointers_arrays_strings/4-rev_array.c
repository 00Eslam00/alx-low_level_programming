#include <stdio.h>

/**
 * reverse_array - function
 * @a : param1
 * @n : param 2
 *Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

void reverse_array(int *a, int n)
{
	int i, temp;

	for (i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = temp;
	}
}
