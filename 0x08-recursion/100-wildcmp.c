#include "holberton.h"
/**
 * wildcmp - Code block
 * Description: Function that compares two strings
 * @s1: String type
 * @s2: String type
 * Return: returns 1 if strings considered identical, otherwise 0
 */
int wildcmp(char *s1, char *s2)
{

	if (*s1 == '\0' && *s2 == '\0')
	{

		return (1);

	}
	if (*s1 == *s2)
	{

		return (wildcmp((s1 + 1), (s2 + 1)));

	}
	if (*s2 == '*')
	{

		if (*(s2 + 1) == '*')
		{

			return (wildcmp(s1, (s2 + 1)));

		}
		else if (wildcmp(s1, (s2 + 1)) == 1)
		{

			return (1);

		}
		else
		{

			return (wildcmp((s1 + 1), s2));

		}

	}

	return (0);

}
