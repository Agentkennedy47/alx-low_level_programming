#include "holberton.h"
/**
 * more_numbers - code entry point
 * Description: Function that prints 10 times the numbers
 * You can only use `_putchar` three times
 * Return: 0
 */
void more_numbers(void)
{

	char c;

	for (c = 0; c <= 14; c++)
	{

		while (c <= 10)
		{

			_putchar(c + '0');
			c++;
		}

	}

}
