#include "holberton.h"
/**
 * print_square - code entry point
 * Description: Function that prints a square
 * @size: int type
 * You can only use `_putchar` function to print
 * Return: 0
 */
void print_square(int size)
{


	int x, y;

	x = 0;

	if (size < 1)
		_putchar('\n');

	while (x < size)
	{


		y = 0;

		while (y < size)
		{

			_putchar('#');
			y++;
		}

		_putchar('\n');
		x++;
	}

}
