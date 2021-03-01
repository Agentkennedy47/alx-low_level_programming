#include "holberton.h"
/**
 * _puts - code entry point
 * Description: Function that prints a string
 * @str: string type
 * Return: 0
 */
void _puts(char *str)
{


	while (*str != '\0')
	{

		_putchar(*str);
		str++;

	}

	_putchar('\n');

}
