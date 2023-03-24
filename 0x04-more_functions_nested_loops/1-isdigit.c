#include "main.h"
/**
 * _isdigit - function here
 * @c: parameter of function
 * Return: 1 if it is lower
 * and return 0 else
 */


int _isdigit(int c)
{
if (c >= '0' && c <= '9')
	return (1);
else
	return (0);
}
