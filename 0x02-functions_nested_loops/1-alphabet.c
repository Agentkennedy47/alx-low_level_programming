#include "holberton.h"
/**
 * print_alphabet - print the alphabet in lowercase
 *
 * Return: 0 always a success
 */
void print_alphabet(void)
{

	char x = 'a';

	while (x <= 'z')
	{

		_putchar(x);
		x++;
	}

	_putchar('\n');
	return (0);
}
