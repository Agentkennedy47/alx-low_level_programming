#include "holberton.h"
/**
 * _isdigit - code block
 * Description: Function that checks for a digit
 * @c: char type letter
 * Return: 0 is success
 */
int _isdigit(int c)
{

	if (c > 45 && c < 60)
	{

		return (1);

	}
	else
	{

		return (0);
	}

}
