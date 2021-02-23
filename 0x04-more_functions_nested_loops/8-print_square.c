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


	int x, y, z;

	x = 0;

	if (x >= size)
	{

		_putchar('\n');
	}
	else
	{

		while (x < size)
		{

			for (y = 0; y < size; y++)
			{

				_putchar('#');

			}
			for (z = 0; z < size; z++)
			{

				_putchar('#');

			}
			_putchar('\n');
			x++;

		}

	}


}
