#include "holberton.h"
/**
 * more_numbers - code entry point
 * Description: Function that prints 10 times the numbers
 * You can only use `_putchar` three times
 * Return: 0
 */
void more_numbers(void)
{

	int num, x;

	num = 0;

	while (num < 10)
	{

		for (x = 0; x <= 14; x++)
		{

			if (x > 9)
			{

				_putchar(x / 10 + '0');
			}

			_putchar(x % 10 + '0');

		}

		_putchar(10);
		num++;

	}

}
