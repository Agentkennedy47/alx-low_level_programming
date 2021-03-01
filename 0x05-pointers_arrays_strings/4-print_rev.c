#include "holberton.h"
/**
 * print_rev - code entry point
 * Description: Function that prints a string in reverse
 * @s: string type
 * Return: 0
 */
void print_rev(char *s)
{


	int size = 0;

	while (*s != '\0')
	{

		s++;
		size++;
	}

	while (size != 0)
	{

		size--;
		s--;
		_putchar(*s);

	}

	_putchar('\n');

}
