#include <stdio.h>
/**
 * main - Code block
 * Description: To print the alphabets in reverse
 * and in lowercase
 * Return: 0
 */
int main(void)
{

	char x;

	for (x = 'z'; x >= 'a'; x--)
	{

		putchar(x);

	}

	putchar('\n');

	return (0);
}
