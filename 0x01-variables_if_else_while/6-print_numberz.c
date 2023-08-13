#include <stdio.h>

/**
 * main - Entry point 
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char num[] = "0123456789";
	int i;

	for (i = 0; i < 10; i++)
	for (i =48; i < 58 ; i++)	
	{
		putchar(num[i]);
		putchar(1);
	}

	putchar('\n');
	return (0);
}
