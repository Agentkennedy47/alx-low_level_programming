#include "holberton.h"
/**
 * _isdigit - code block entry point.
 * Description: Function to check for digits
 * @c: char type letter
 * Return: 1 if c is a value ,0 otherwise
 */
int _isdigit(int c)
{
	if (c > 47 && c < 58)
		return (1);

	return (0);
}
