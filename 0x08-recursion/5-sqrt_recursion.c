#include "holberton.h"
/**
 * _sqrt_root - Code block
 * Description: Find the square root
 * @n: int type
 * @i: int type
 * Return: -1 if i*i > n else return sqrt(n, i+1), n if i*i = n
 */
int _sqrt_root(int n, int i)
{

	if (i * i == n)
	{

		return (i);
	}
	else if (i * i > n)
	{

		return (-1);
	}

	return (_sqrt_root(n, i + 1));

}

/**
 * _sqrt_recursion - Code block
 * Description: Find the square root of n
 * @n: int type
 * Return: sqrt(n,0)
 */
int _sqrt_recursion(int n)
{

	if (n < 1)
	{

		return (-1);
	}

	return (_sqrt_root(n, 0));

}
