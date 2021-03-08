#include "holberton.h"
/**
 * *_strstr - Code block point
 * Description: Function that locates a substring
 * @haystack: String that is searched for
 * @needle: First occurrence of the substring
 *
 * Return: Points to the beginning of the located substring, or
 * `NULL` if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{

	int x, y;

	for (x = 0; haystack[x] != '\0'; x++)
	{

		for (y = 0; needle[y] != '\0'; y++)
		{
			if (haystack[x + y] != needle[y])
				break;
		}
		if (needle[y] == '\0')
			return (haystack + x);

	}

	return (0);

}
