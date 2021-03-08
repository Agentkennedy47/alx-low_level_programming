#include "holberton.h"
/**
 * *_strchr - Code entry point
 * Description: Function that locates a character in a string
 * @s: A pointer to the memory area to be filled
 * @c: The character to fill the memory area with
 *
 * Return: A pointer to the filled memory area @s
 */
char *_strchr(char *s, char c)
{


	int index;

	for (index = 0; s[index] >= '\0'; index++)
	{

		if (s[index] == c)
			return (s + index);

	}

	return ('\0');


}
