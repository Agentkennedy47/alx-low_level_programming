#include "holberton.h"
/**
 * add - code block entry point
 * Description: To add two integers
 * @i: number to be added
 * @j: number to be added
 * Return: 0 is successful
 */
int add(int i, int j)
{

	int sum;

	sum = (i + j);

	_putchar(sum + '0');
	return (sum);

}
