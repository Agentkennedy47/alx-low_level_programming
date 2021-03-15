#include "holberton.h"
/**
 * _strlen_recursion - Code block entry
 * Description: Function that returns the length of a string
 * @s: String to be printed
 *
 * Return: The length of the string
 */
int _strlen_recursion(char *s)
{

	int length = 0;


	if (*s)
	{

		length += _strlen_recursion(s + 1);
		length++;
	}

	return (length);

}
