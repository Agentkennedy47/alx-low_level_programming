#include "holberton.h"
/**
 * _puts_recursion - Code block entry
 * Description: Function that prints a string
 * @s: String to be printed
 *
 *
 */
void _puts_recursion(char *s)
{

	if (*s)
	{

		_putchar(*s);
		_puts_recursion(++s);
	}

	_putchar('\n');

}
