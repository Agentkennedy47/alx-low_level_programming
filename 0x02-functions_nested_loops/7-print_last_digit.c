#include "holberton.h"
/**
 * print_last_digit - code entry point
 * Description: To print the last digit of a number
 * @c: char type letter
 * Return: 0 is a success
 */
int print_last_digit(int c)
{

	c = c % 10;

	if (c < 0)
	{

		c = c * -1;
		_putchar (c % 10 + '0');
		return (c % 10);
	}

}
