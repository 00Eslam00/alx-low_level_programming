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

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}
