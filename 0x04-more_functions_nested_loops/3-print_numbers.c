#include "holberton.h"
/**
 * print_numbers - code entry point
 * Description: Function that prints numbers
 * Return: 0 is always a success
 */
void print_numbers(void)
{

	int x;
	x = 0;

	while (x < 10)
	{

		_putchar(x + '0');
		x++;
	}

	_putchar('\n');

}
