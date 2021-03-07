#include "holberton.h"
/**
 * *rot13 - code entry point
 * Description: Function that encodes a string using `rot13`
 * @str: string type
 * Return: Points to string
 */
char *rot13(char *str)
{
	int i = 0, j;

	char arr[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIHKLMNOPQRSTUVWXYZ";
	char arr2[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (str[i] != '\0')
	{
		for (j = 0; j <= 52; j++)
		{
			if (str[i] == arr[j])
			{
				str[i] = arr2[j];
				break;
			}
		}

		i++;
	}

	return (str);
}
