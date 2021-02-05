#include <stdio.h>
/**
 * main - Code block
 * Description: To print the alphabets in reverse
 * and in lowercase
 * Return: 0
 */
int main(void)
{

	int i;

	for (i = 122; i >= 97; i--)
	{

		putchar('%c ', i);

	}

	putchar('\n');

	return (0);
}
