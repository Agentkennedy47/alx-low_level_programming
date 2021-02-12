#include "holberton.h"
/**
 * print_alphabet_x10 - code entry point
 * Description: To print the alphabet 10 times and in lowercase
 * Return: 0 always successful
 */
void print_alphabet_x10(void)
{

	char i, j;

	for (i = 0; i <= 10; i++)
	{

		for (j = 'a'; j <= 'z'; j++)
		{

			_putchar(j);

		}
	}

	_putchar('\n');

}
