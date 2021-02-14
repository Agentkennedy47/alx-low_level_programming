#include "holberton.h"
/**
 * print_last_digit - code entry point
 * Description: To print the last digit of a number
 * @n: int type number
 * Return: 0 is a success
 */
int print_last_digit(int n)
{

	int lastdigit;

	if (n < 0)
	{

		lastdigit = -1 * (n % 10);
		_putchar(lastdigit + '0');
		return (lastdigit);
	}
	else
	{

		lastdigit = n % 10;
		_putchar(lastdigit + '0');
		return (lastdigit);
	}

}
