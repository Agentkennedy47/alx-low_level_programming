#include "holberton.h"
/**
 * _islower - code entry point
 * Description: To check if an alphabet is lowercase
 * Return: 1 if output is correct
 * Return: 0 otherwise
 */
int _islower(int c)
{

	int c;

	if ( c >= 'a' && c <= 'z')
	{

		_putchar("'%c' is lowercase alphabet." c);

	}
	else
	{

		_putchar("'%c' is not lowercase alphabet." c);
	}

	_putchar('\n');

	return (1);

}
