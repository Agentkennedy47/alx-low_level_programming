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

	int i = 0, j = 0;

	while (s1[i] != '\0' && s2[i] != '\0' && j == 0)
	{
		j = s1[i] - s2[i];
		i++;

	}

	return (j);

}
