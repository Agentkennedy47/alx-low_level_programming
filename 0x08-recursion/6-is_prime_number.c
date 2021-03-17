#include "holberton.h"
/**
 * _to_check_prime - Code block
 * Description: To check for prime number
 * @n: int type
 * @i: int type
 * Return: If (n=x) return 1, return 0 if not (`n % i` = 0)
 */
int _to_check_prime(int n, int i)
{

	if (n == i)
	{

		return (1);
	}
	else if (n % i == 0)
	{

		return (0);
	}

	return (_to_check_prime(n, i + 1));

}

/**
 * is_prime_number - Code block
 * Description: Print out prime number
 * @n: int type
 * Return: _to_check_prime(n, 2)
 */
int is_prime_number(int n)
{

	if (n < 2)
	{

		return (0);

	}

	return (_to_check_prime(n, 2));

}
