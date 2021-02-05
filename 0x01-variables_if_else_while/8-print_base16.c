#include <stdio.h>
/**
 * main - Code block
 * Description: To print all numbers of base 16 in
 * lowercase followed by a new line
 * Return: 0
 */
int main(void)
{

	char x;
	int i;

	for (i = 0; i < 10; i++)
	{

		putchar(i + '0');

	}

	for (x = 'a'; x < 'g'; x++)
	{

		putchar(x);

	}

	putchar('\n');

	return (0);

}
