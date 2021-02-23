#include "holberton.h"
/**
 * print_diagonal - code entry point
 * Description: Function that draws a diagonal line
 * @n: int type number
 * You can only use `_putchar` function to print
 * Return: 0
 */
void print_diagonal(int n)
{


	int x, y;

	if (n <= 0)
	{

		_putchar('\n');
	}

	for (x = 1; x <= n; x++)
	{

		for (y = 1; y < x; y++)
		{

			_putchar(' ');
		}

		_putchar('\\');
		_putchar('\n');

	}


}
