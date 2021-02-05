#include <stdio.h>
/**
 * main - main code block
 * Prints all possible different combinations of two
 * digits
 * Numbers must be separated by comma
 * The two digits must be different
 * Print only the smallest combination of two digits
 * Return: 0
 */
int main(void)
{

	int i, j, k;

	i = 0;

	while (i < 100)
	{

		j = i % 10;
		k = i / 10;

		if (k < l)
		{

			putchar(k + '0');
			putchar(j + '0');

			if (i < 89)
			{

				putchar(44);
				putchar(32);
			}
		}

		i++;
	}

	putchar('\n');

	return (0);
}
