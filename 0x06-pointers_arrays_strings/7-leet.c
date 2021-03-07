#include "holberton.h"
/**
 * *leet - code entry point
 * Description: Function that encodes a string to 1337
 * @str: string type
 * Return: Points to string
 */
char *leet(char *str)
{
	int i, j;

	char letter[] = "aAeEoOtTlL";
	char replace[] = "4433007711";

	for (i = 0; str[i] != '\0'; i++)
	{

		for (j = 0; letter[j]; j++)
		{
			if (letter[j] == str[i])
			{
				str[i] = replace[j];
			}
		}

	}

	return (str);
}
