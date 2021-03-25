#include <stdio.h>
#include <stdlib.h>
/**
 * main - Code block entry
 * Description: Program that prints the minimum number of coins to make
 * change for an amount of money
 * @argc: int type
 * @argv: char type
 * Return: If the number of arguments is not exactly 1 print error, return 1
 * If the number of argument is negative, print 0
 */
int main(int argc, char *argv[])
{
	int cents, coins = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	while (cents > 0)
	{
		if ((cents - 25) >= 0)
		{
			cents -= 25;
			continue;
		}
		if ((cents - 10) >= 0)
		{
			cents -= 10;
			continue;
		}
		if ((cents - 5) >= 0)
		{
			cents -= 5;
			continue;
		}
		if ((cents - 2) >= 0)
		{
			cents -= 2;
			continue;
		}

		coins++;
		cents--;
	}

	printf("%d\n", coins);
	return (0);
}
