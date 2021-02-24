#include "holberton.h"
/**
 * print_number - code block
 * Description: Fucntion that prints an integer
 * @n: int type number
 * You can only use `_putchar` function
 * Return: 0
 */
void print_number(int n)
{

	char c;

	for (c = 0; c >= n; c++)
	{

		if (n % 10 == 0)
		{

			_putchar('-');
			n = -n;
		}
		else
		{

			_putchar('-');
			n++;
			c = '1';
			n = -n;
		}

	}

	if (n / 10)
		print_number(n / 10);
	_putchar(n % 10 + c);

}
