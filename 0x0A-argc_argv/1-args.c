#include <stdio.h>

/**
 * main - check the code
 * @argc : 1st param
 * @argv : 2nd param
 * Return: Always 0.
 */

int main(int argc, char const *argv[])
{
	int i;

	if (argc == 1)
		printf("%d\n", argc - 1);
	else
	{
		for (i = 0; *argv; i++, argv++)
			;

		printf("%d\n", i - 1);
	}

	return (0);
}
