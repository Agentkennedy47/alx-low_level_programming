#include "holberton.h"
/**
 * *_strcat - code entry point
 * Description: Function that concatenates two string
 * @src: char type
 * @dest: char type
 * Return: Pointer to the string `dest`
 */
char *_strcat(char *dest, char *src)
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
		length++;

	}

	dest[length] = '\0';
	return (dest);

}
