#include "holberton.h"
/**
 * *_strncpy - code entry point
 * Description: Function that copies a string
 * @dest: sting type
 * @src: string type
 * @n: number of byte to append
 * Return: 0 always successful
 */
char *_strncpy(char *dest, char *src, int n)
{

	int length = 0, j = 0;

	while (src[length++])
		j++;
	for (length = 0; src[length] && length < n; length++)
		dest[length] = src[length];
	for (length = j; length < n; length++)
		dest[length] = '\0';

	return (dest);


}
