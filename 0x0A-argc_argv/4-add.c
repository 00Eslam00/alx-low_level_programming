#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code
 * @argc : 1st param
 * @argv : 2nd param
 * Return: Always 0.
 */

int main(int argc, char const *argv[])
{
	int i;
	int j;
	int c;
	int sum;
	char *s;

	sum = 0;
	c = 0;

	i = 1;
	while (i < argc)
	{

		s = (char *)argv[i];
		j = 0;
		while (s[j] != '\0')
		{
			if (s[j] < '0' || s[j] > '9')
			{
				printf("Error\n");
				return (1);
			}
			j++;
		}
		i++;
	}

	for (i = 1; i < argc; i++)
	{
		c = atoi(argv[i]);
		sum = sum + c;
	}
	printf("%d\n", sum);
	return (0);
}
