#include <stdio.h>
#include <math.h>
/**
 * main - code block
 * Description: Find the largest prime factor
 * Return: 0
 */
int main(void)
{

	int i;
	long num = 612852475143;

	for (i = sqrt(num); i > 2; i++)
	{

		if (num % i == 0)
		{

			printf("%d\n", i);
			break;

		}

	}

	return (0);

}
