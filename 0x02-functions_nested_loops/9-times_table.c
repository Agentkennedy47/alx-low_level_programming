#include "holberton.h"
/**
 * times_table - code entry point
 * Description: To print the 9 times table, starting with 0
 *
 * Return: 0 is a success
 */
void times_table(void)
{

	int i, j, k;

	for (i = 0; i <= 9; i++)
	{

		for (j = 0; j <= 9; j++)
		{

			k = i * j;
			if (j != 0)
			{

				_putchar(',');
				_putchar(' ');
			}
			if (j == 0)
			{

				_putchar('0');
			}
			else if (k >= 10)
			{

				_putchar((k / 10) + '0');
				_putchar((k % 10) + '0');
			}
			else if ((k < 10) && (j != 0))
			{

				_putchar(' ');
				_putchar((k % 10) + '0');
			}
		}

		_putchar('\n');
	}

}
