#include "holberton.h"
/**
 * _isalpha - code entry point
 * Description: To check for alphabetic characters
 * @c: char type letter
 * Return: 0 is always a success
 */
int _isalpha(int c)
{

	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{

		return (1);
	}
	else
	{

		return (0);
	}

}
