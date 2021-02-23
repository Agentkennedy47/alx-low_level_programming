#include "holberton.h"
/**
 * print_triangle - code entry point
 * Description: Function that prints a triangle
 * @size: int type number
 * You can only use `_putchar`
 * Return: 0
 */
void print_triangle(int size)
{


	int a, b, c;

	if (size <= 0)
	{

		_putchar('\n');
	}
	else
	{

		for (a = 1; a <= size; a++)
		{

			for (b = a; b < size; b++)
				_putchar(' ');
			for (c = size - a; c < size; c++)
				_putchar('#');
			_putchar('\n');
		}

	}


}
