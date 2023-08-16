#include "main.h"
/**
 * _isalpha - checking Uppercse alphabets
 *
 * @c: parameter to be checked
 *
 * Return: 1 if 'c' is a letter , lower or uppercase , o otherwise
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
