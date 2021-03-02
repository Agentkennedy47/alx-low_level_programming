#include "holberton.h"
/**
 * *_strcpy - code entry point
 * Description: Function that copies the string pointed to by `src`
 * @dest: char type
 * @src: char type
 * Return: The pointer to `dest`
 */
char *_strcpy(char *dest, char *src)
{


	int i, size;

	for (size = 0; src[size] != '\0'; size++)
	{

	}

	for (i = 0; i <= size; i++)
	{

		dest[i] = src[i];

	}

	return (dest);

}
