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

	int index;

	for (index = 0; needle[index] >= '\0'; index++)
	{

		if (needle[index] == haystack)
			return (needle + index);
	}

	return ('\0');

}
