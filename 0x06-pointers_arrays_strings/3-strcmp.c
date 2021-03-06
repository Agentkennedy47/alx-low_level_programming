#include "holberton.h"
/**
 * _strcmp - code point entry
 * Description: Function that compares two strings
 * @s1: string type
 * @s2: string type
 * Function should work excatly like `strcmp`
 * Return: 0
 */
int _strcmp(char *s1, char *s2)
{

	while (*s1 == *s2)
	{

		if (*s1 == '\0' || *s2 == '\0')
			break;

		s1++;
		s2++;

	}

	if (*s1 == '\0' && *s2 == '\0')
		return (0);
	else
		return (-1);

}
