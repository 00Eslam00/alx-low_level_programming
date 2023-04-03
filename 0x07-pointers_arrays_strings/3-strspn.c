#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: string to be searched
 * @accept: bytes to be accepted
 * Return: number to bytes in the initial segment of s
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int res = 0;
	int i, fc;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			fc = 0;
			if (*s == accept[i])
			{
				res++;
				fc = 1;
				break;
			}
		}
		if (!fc)
			break;
		s++;
	}
	return (res);
}
