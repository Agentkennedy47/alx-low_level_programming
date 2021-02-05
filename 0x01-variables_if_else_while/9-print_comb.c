#include <stdio.h>
/**
 * main - Code block
 * Print all possible combinations od single-digit numbers
 * Number must be separated by comma
 * Numbers should be printed in ascending order
 * Return: 0
 */
int main(void)
{

	int i = 0;

	while (i < 10)
	{

		putchar(i + '0');
		if (i < 9)
		{

			putchar(44);
			putchar(32);

		}

		i++;

	}

	putchar('\n');

	return (0);
}
