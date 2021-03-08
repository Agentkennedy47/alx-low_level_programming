#include "holberton.h"
/**
 * *_strpbrk - Code block point
 * Description: Function that searches a string for any set of bytes
 * @s: First occurrence in the string
 * @accept: The set of bytes to be searched
 *
 * Return: Points to the byte in @s that matches one of the
 * bytes in @accept
 */
char *_strpbrk(char *s, char *accept)
{
	int index;

	while (*s)
	{

		for (index = 0; accept[index]; index++)
		{

			if (*s == accept[index])
				return (s);
		}

		s++;
	}

	return ('\0');
}
