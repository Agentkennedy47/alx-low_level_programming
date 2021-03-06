#include "holberton.h"
/**
 * reverse_array - code entry point
 * Description: Function that reverses the content of an array
 * @a: int type number
 * @n: number of elements of the array
 * Return: 0
 */
void reverse_array(int *a, int n)
{


	int i, j;

	for (i = 0; i < n / 2; i++)
	{

		j = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = j;

	}


}
