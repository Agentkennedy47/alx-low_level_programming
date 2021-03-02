#include "holberton.h"
/**
 * puts_half - code entry point
 * Description: Function that prints half of a string
 * @str: string type
 * Function should print the second half of the string
 * Return: 0
 */
void puts_half(char *str)
{


	int length_of_the_string = 0;
	int n = (length_of_the_string - 1) / 2;

	while (*str != '\0')
	{

		if (n != 0)
			_putchar(*str);

		str++;
		length_of_the_string++;

	}

	_putchar('\n');

}
