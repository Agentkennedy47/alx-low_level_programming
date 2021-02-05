#include <stdio.h>
/**
 * main - Code block
 * Description: To print all alphabets in lowercase apart
 * from letter 'q' and 'e'
 * Return: 0
 */
int main(void)
{

	char x = 'a';

	while (x <= 'z')
	{

		if (x != 'q' && x != 'e')
			putchar(x);
		x++;

	}

	putchar('\n');

	return (0);

}
