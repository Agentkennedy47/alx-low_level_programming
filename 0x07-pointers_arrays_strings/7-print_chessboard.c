#include "holberton.h"
/**
 * print_chessboard - Code block point
 * Description: Function that prints the chessboard
 * @a: char type
 *
 * Return: 0
 */
void print_chessboard(char (*a)[8])
{
	int x, y;

	for (x = 0; x < 8; x++)
	{

		for (y = 0; y < 8; y++)
			_putchar(a[x][y]);

		_putchar(10);
	}
}
