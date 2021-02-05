#include <stdio.h>
/**
 * main - main code block
 * Description: To print alphabets in lowercase and then
 * print alphabets in uppercase
 * Return: 0
 */
int main(void)
{

	char x = 'a';
	char y = 'A';

	while (x <= 'z')
	{

		putchar(x);
		x++;

	}

	while (y <= 'Z')
	{

		putchar(y);
		y++;

	}

	putchar('\n');

	return (0);

}
