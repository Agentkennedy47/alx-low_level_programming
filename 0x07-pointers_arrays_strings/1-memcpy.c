#include "holberton.h"
/**
 * *_memcpy - Code entry point
 * Description: Function that copies memory area
 * @dest: A pointer to the memory area to be filled
 * @src: The character  to fill the memory area with
 * @n: The number of bytes to be filled
 *
 * Return: A pointer to the filled memory area @dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{


	unsigned int index;

	for (index = 0; index < n; index++)
	{

		dest[index] = src[index];

	}

	return (dest);

}
