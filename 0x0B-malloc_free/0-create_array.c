#include "main.h"
#include <stdlib.h>

/**
* *create_array - creating an array
* @size: size of array
* @c: string chracter
* Return: ptr
*/
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ptr = (char *)malloc(size * sizeof(char));

	if (size == 0)
	{
		return (NULL);
	}
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		ptr[i] = c;
	}
	return (ptr);
}
