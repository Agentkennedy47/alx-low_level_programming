#include "holberton.h"
/**
 * _pow_recursion - Code block entry
 * Description: Function that returns the value of `x` raised to the
 * power of `y`
 * @x: Value to be measured
 * @y: Exponent to be used
 * Return: Function should return -1, if `y` is lower than 0
 */
int _pow_recursion(int x, int y)
{

	int exp = x;

	if (y < 0)
	{

		return (-1);
	}
	else if (y == 0)
	{

		return (1);
	}

	exp *= _pow_recursion(x, y - 1);

	return (exp);

}
