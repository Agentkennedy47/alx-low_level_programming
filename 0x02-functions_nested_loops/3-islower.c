#include "holberton.h"
/**
 * _islower - code entry point
 * Description: To check if an alphabet is lowercase
 * @c: char type letter
 * Return: 0 is always a success
 */
int _islower(int c)
{


	if (c >= 'a' && c <= 'z')
	{

		return (1);
	}
	else
	{

		return (0);
	}

}
