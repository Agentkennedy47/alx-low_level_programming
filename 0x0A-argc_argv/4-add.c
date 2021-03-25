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

	int i;
	int sum = 0;

	if (argc < 2)
	{

		printf("0\n");
		return (0);

	}

	for (i = 1; i < argc; i++)
	{

		if (!atoi(argv[i]))
		{

			printf("Error\n");
			return (1);
		}

		sum += atoi(argv[i]);

	}

	printf("%d\n", sum);
	return (0);
}
