#include "holberton.h"
/**
 * swap_int - code entry point
 * Description: Function that swaps the values of two integers
 * @a: int type number
 * @b: int type number
 * Return: 0 is a success
 */
void swap_int(int *a, int *b)
{


	int x;

	x = *a;
	*a = *b;
	*b = x;


}
