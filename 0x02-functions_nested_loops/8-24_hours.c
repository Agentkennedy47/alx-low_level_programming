#include "holberton.h"
/**
 * jack_bauer - code entry point
 * Description: To print every minute of the day of Jack Bauer
 * Return: 0 shows success
 */
void jack_bauer(void)
{

	int hr, min;

	for (hr = 0; hr < 24; hr++)
	{

		for (min = 0; min < 60; min++)
		{

			_putchar((hr / 10) + '0');
			_putchar((hr % 10) + '0');
			_putchar(':');
			_putchar((min / 10) + '0');
			_putchar((min % 10) + '0');
			_putchar('\n');
		}
	}

}
