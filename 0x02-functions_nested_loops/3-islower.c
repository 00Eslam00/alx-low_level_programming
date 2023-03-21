#include "main.h"
/**
 * _islower - function here
 * @c: parameter of function
 * Return: 1 if it is lower
 * and return 0 else
 */


int _islower(int c)
{
	if (c < 'a')
		return (0);
	else
		return (1);
}
