#include "holberton.h"
/**
 * puts2 - code entry point
 * Description: Function that prints every other character of a string
 * starting with the first character
 * @str: string type
 * Return: 0
 */
void puts2(char *str)
{


	int size = 0;

	while (*str != '\0')
	{

		if ((size % 2) == 0)
		{

			_putchar(*str);
		}

		str++;
		size++;
	}

	_putchar('\n');

}
