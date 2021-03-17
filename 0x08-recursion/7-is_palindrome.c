#include "holberton.h"
/**
 * str_length - Code block
 * Description: Function to check the string length
 * @s: String type
 * Return: Length of the string
 */
int str_length(char *s)
{

	if (*s == '\0')
	{

		return (0);
	}

	return (1 + str_length(s + 1));

}

/**
 * _pal_checker - Code block
 * Description: To check if string is palindrome
 * @left: String type
 * @right: String type
 * Return: if left is not right returns 0, if left equals right returns 1
 * else _pal_checker(left+1, right-1)
 */
int _pal_checker(char *left, char *right)
{

	if (*left != *right)
	{

		return (0);
	}
	else if (*left >= *right)
	{

		return (1);

	}

	return (_pal_checker(left + 1, right - 1));

}

/**
 * is_palindrome - Code block
 * Description: Function that checks if a string is palindrome
 * @s: String type
 * Return: Returns 1 if a string is pal, 0 if not a pal
 */
int is_palindrome(char *s)
{

	int x = str_length(s);
	char *left = s;
	char *right = s + (x - 1);

	if (x == 0)
	{

		return (1);

	}

	return (_pal_checker(left, right));

}
