#include "holberton.h"
/**
 * factorial - Code block entry
 * Description: Function that returns the factorial of a given number
 * @n: Number to be measured
 * Return: -1 to indicate error if `n` is lower than 0
 */
int factorial(int n)
{

	if (n < 0)
	{

		return (-1);
	}
	else if (n == 0)
	{

		return (1);
	}

	return (n * factorial(n - 1));

}
