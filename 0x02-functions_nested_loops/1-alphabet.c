#include "holberton.h"
/**
 * print_alphabet - code entry point
 * Description: To print the alphabet in lowercase as an output
 * Return: 0 is always a success
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

}
