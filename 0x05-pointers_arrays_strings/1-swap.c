#include <unistd.h>

/**
 * swap_int - function
 * @a: param1
 * @b: param2
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
