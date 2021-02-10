#include "holberton.h"
/**
 * main - code block entry
 * Description: To print the string "Holberton" as an output
 * Return: 0 is always a success
 */
int main(void)
{

	char str = "Holberton";
	int x;

	for (x = 0; x < sizeof(str); x++)
	{
		_putchar(str[x]);
	}

	_putchar('\n');

	return (0);

}
