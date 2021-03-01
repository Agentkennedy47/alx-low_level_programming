#include "holberton.h"
/**
 * _strlen - code entry point
 * Description: Function that returns the length of a string
 * @s: string type
 * Return: Length of a string
 */
int _strlen(char *s)
{


	int size = 0;

	while (*s != '\0')
	{

		size++;
		s++;
	}

	return (size);

}
