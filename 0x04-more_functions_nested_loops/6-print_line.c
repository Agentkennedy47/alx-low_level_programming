#include "holberton.h"
/**
 * print_line - code entry point
 * Description: Function that draws a straight line
 * @n: int type number
 * Return: 0 is a success
 */
void print_line(int n)
{

	int x;

	for (x = 0; x < n; x++)
	{

		_putchar('_');

	}

	_putchar('\n');

}
