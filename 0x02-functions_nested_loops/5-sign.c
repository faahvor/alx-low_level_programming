#include "main.h"

/**
 * print_sign -printing arithmetic operator
 *
 * @n: Parameter to be checked
 *
 * Return: 1 for postive. 0 for zero, -1 for less than zero
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
