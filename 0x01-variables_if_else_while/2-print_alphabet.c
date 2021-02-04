#include <stdio.h>
/**
 * main - main code block
 * Description: To print alphabet in lowercase
 * Return: 0
 */
int main(void)
{

	for (int y = 'A'; y <= 'z'; y++)
		putchar(tolower(y));
	return (0);

}
