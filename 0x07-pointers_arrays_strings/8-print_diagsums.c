#include "holberton.h"
#include <stdio.h>
/**
 * print_diagsums - Code block
 * Description: Function that prints the sum of the two
 * diagonals of a square
 * @a: Matrix of integers
 * @size: Size of the matrix
 *
 * Return: 0
 */
void print_diagsums(int *a, int size)
{
	int i, add1 = 0, add2 = 0;

	for (i = 0; i < size; i++)
	{

		add1 += a[i];
		a += size;
	}

	a -= size;

	for (i = 0; i < size; i++)
	{

		add2 += a[i];
		a -= size;
	}

	printf("%d, %d\n", add1, add2);
}
