#include "main.h"

/**
 * _strpbrk - search a string for any of a set
 * @s: string to be searched
 * @accept: string to match
 * Return: pointer to the byte that match or NULL
 */
char *_strpbrk(char *s, char *accept)
{
	int itr, jtr;
	char *p;

	itr = 0;
	while (s[itr] != '\0')
	{
		jtr = 0;
		while (accept[jtr] != '\0')
		{
			if (accept[jtr] == s[itr])
			{
				p = &s[itr];
				return (p);
			}
			jtr++;
		}
		itr++;
	}
	return (0);
}
