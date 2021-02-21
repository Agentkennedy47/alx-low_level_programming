#include "holberton.h"
/**
 * _isupper - code entry point
 * Description: Function that checks for uppercase character
 * @c: char type letter
 * Return: 0 is always a success
 */
int _isupper(int c)
{

	if (c >= 'A' && c <= 'Z')
	{

		return (1);
	}
	else
	{

		return (0);
	}

}
