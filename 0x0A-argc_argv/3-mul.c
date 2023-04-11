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
	int a, b, c;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	a = atoi(argv[1]);
	b = atoi(argv[2]);
	c = a * b;

	printf("%d\n", c);

	return (0);
}
