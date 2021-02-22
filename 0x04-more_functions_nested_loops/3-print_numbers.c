#include "holberton.h"
/**
 * print_numbers - code entry point
 * Description: Function that prints numbers
 * Return: 0 is always a success
 */
void print_numbers(void)
{

	char c;

	for (c = 0; c < 10; c++)
	{

		_putchar(c + '0');
	}

	_putchar('\n');

}
