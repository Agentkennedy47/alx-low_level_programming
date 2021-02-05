#include <stdio.h>
/**
 * main - code block
 * Description: Print all possible combinations of two-digit numbers.
 * Numbers should range from 0 to 99.
 * The two numbers should be separated by a space.
 * All numbers should be printed with two digits.
 * The combinations of numbers should be printed in ascending order.
 * `00 01 and `01 00` are considered as the same combination.
 * You can only use the `putchar` function
 * You can only use `putchar` eight times
 * You are not allowed to use any variable of type `char`
 * Return: 0
 */
int main(void)
{

	int i, j;
	int a, b, c, d;

	for (i = 0; i < 100; i++)
	{

		a = i / 10;
		b = i % 10;

		for (j = 0; j < 100; j++)
		{

			c = j / 10;
			d = j % 10;

			if (a < c || (a == c && b < d))
			{

				putchar(a + '0');
				putchar(b + '0');
				putchar(32);
				putchar(c + '0');
				putchar(d + '0');

				if (!(a == 9 && b == 8))
				{

					putchar(44);
					putchar(32);
				}
			}
		}
	}

	putchar(10);

	return (0);

}
