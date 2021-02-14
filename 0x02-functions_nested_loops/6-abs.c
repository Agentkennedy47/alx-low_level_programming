#include "holberton.h"
/**
 * _abs - code entry point
 * Description: To print the absolute value of an integer
 * @x: char type letter
 * Return: 0 is always a success
 */
int _abs(int x)
{

	if (x > 0 || x == 0)
		return (x);
	else
		return (x * -1);

}
