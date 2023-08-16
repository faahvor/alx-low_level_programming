#include "main.h"

/**
 * jack_bauer - Displaying movie time
 *
 * Return: Always 0 (Success)
 */

void jack_bauer(void)
{
	int i;
	int j;

	for (i = 0; <= 23; i++)
	{
		for (j = 0; j <= 59; j++)
		{
			_putchar('0' + i / 10);
			_putchar('0' + i % 10);
			_putchar(':');
			_putchar('0' + j / 10);
			_putchar('0' + j % 10);
			_putchar('\n');
		}
	}
}
