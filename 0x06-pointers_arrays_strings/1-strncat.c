#include "holberton.h"
/**
 * *_strncat - code entry point
 * Description: Function that concatenates two strings
 * @dest: string type
 * @src: string type
 * @n: number of bytes to append
 * Return: Pointer to the resulting string `dest`
 */
char *_strncat(char *dest, char *src, int n)
{


	int length = 0, j = 0;

	while (dest[length] != '\0')
	{

		length++;
	}

	while (src[j] != '\0')
	{

		dest[length] = src[j];
		j++;
		length;

	}

	if (n > 0)
	{

		dest[length] = '\0';
	}

	return (dest);

}
