#include <stdio.h>
/**
 * _islower - used to check if an aiphabet is in lowercase
 *
 * @c: The character to be checked.
 * Return: 1 if c is a lowercase , 0 otherwise
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
