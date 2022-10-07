#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked -it allocates memory.
 * @b: amount of bytes.
 *
 * Return: pointer to the allocated memory.
 * if malloc fails, terminate process
 */
void *malloc_checked(unsigned int b)
{
	char *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}
