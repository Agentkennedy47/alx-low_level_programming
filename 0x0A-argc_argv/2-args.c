#include <stdio.h>
/**
 * main - Code block entry
 * Description: Program that prints all arguments
 * @argc: int type
 * @argv: char type
 * Return: 0
 */
int main(int argc, char *argv[])
{

	int i;

	for (i = 0; i < argc; i++)
	{

		printf("%s\n", argv[i]);

	}

	return (0);

}
