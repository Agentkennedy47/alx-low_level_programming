#include "holberton.h"
/**
 * print_sign - code entry point
 * Description: To print the sign of a number
 * @n: int type number
 * Return: 0 is always a success
 */
int print_sign(int n)
{

	if (n > 0)
	{

		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{

		_putchar('-');
		return (-1);
	}
	else
	{

		_putchar('0');
		return (0);
	}

}
