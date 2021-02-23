#include "holberton.h"
/**
 * print_most_numbers - code entry point
 * Description: Function that prints numbers except 2 and 4
 * You can only use `_putchar` twice
 * Return: 0
 */
void print_most_numbers(void)
{

	char c;

	for (c = 0; c < 10; c++)
	{

		if (c != 2 && c != 4)
		{

			_putchar(c + '0');
		}

		_putchar('\n');
	}

}
