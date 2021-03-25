#include <stdio.h>
#include <stdlib.h>
/**
 * main - Code block entry
 * Description: Program that multiplies two numbers
 * @argc: int type
 * @argv: char type
 * Return: if no arguments print error, and return 1
 */
int main(int argc, char *argv[])
{

	int value1, value2, multiply;

	if (argc != 3)
	{

		printf("Error\n");
		return (1);

	}

	value1 = atoi(argv[1]);
	value2 = atoi(argv[2]);
	multiply = value1 * value2;

	printf("%d\n", multiply);
	return (0);

}
