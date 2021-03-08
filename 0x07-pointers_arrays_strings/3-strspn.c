#include "holberton.h"
/**
 * _strspn - Code block
 * Description: Function that gets the length of a prefix substring
 * @s: String to be searched for
 * @accept: Prefix to be measured
 *
 * Return: The number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{


	unsigned int bytes = 0;
	int x;

	while (*s)
	{

		for (x = 0; accept[x]; x++)
		{

			if (*s == accept[x])
			{
				bytes++;
				break;
			}
			else if (accept[x + 1] == '\0')
				return (bytes);
		}

		s++;

	}

	return (bytes);


}
