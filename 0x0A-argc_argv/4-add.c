#include <stdio.h>
#include <stdlib.h>
/**
 * main - Code entry block
 * Description: Program that adds positive numbers
 * @argc: int type
 * @argv: char type
 * Return: Print error if digits contain symbols, return 1
 */
int main(int argc, char *argv[])
{

	int x, y;
	int sum = 0;

	if (argc < 2)
	{

		printf("0\n");
		return (0);

	}

	for (x = 1; x < argc; x++)
	{

		for (y = 0; argv[x][y] != '\0'; y++)
		{

			if (argv[x][y] < '0' || argv[x][y] > '9')
			{

				printf("Error\n");
				return (1);

			}
		}

		sum += atoi(argv[x]);

	}

	printf("%d\n", sum);
	return (0);
}
