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
	int i = 0, x = 0, j = 0;
	int arr[] = {25, 10, 2, 5, 1};

	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}

	x = atoi(argv[1]);
	while (x > 0)
	{

		for (i = 0; i < 5; i++)
		{
			if (x - arr[i] >= 0)
			{
				x -= arr[i];
				break;
			}
		}
		j++;
	}

	printf("%d\n", j);
	return (0);
}
