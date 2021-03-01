#include "holberton.h"
/**
 * _puts - code entry point
 * Description: Function that prints a string
 * @str: string type
 * Return: 0
 */
void _puts(char *str)
{

	int i = 0;

	while (*(str + i) != '\0')
	{

		_putchar(*(str + i));
		i++;

	}

	_putchar('\n');
}
