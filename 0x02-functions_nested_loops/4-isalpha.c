#include "main.h"
/**
 * _isalpha - function here
 * @c: parameter of function
 * Return: 1 if it is lower
 * and return 0 else
 */


int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
