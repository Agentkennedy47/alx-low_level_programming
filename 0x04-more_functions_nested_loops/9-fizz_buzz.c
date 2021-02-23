#include <stdio.h>
/**
 * main - code entry point
 * Description: A program that prints from 1 to 100
 * Return: 0 is a success
 */
int main(void)
{


	int num = 1;

	while (num <= 100)
	{

		if (num != 1)
			printf(" ");
		if ((num % 3) == 0 && (num % 5) == 0)
			printf("FizzBuzz");
		else if ((num % 3) == 0)
			printf("Fizz");
		else if ((num % 5) == 0)
			printf("Buzz");
		else
			printf("%d", num);
		num++;
	}

	putchar('\n');
	return (0);

}
