#include <stdio.h>

/**
 * main - prints
 *
 * Return: 0
 */

int main(void)
{
	int digit;

	for (digit = 0; digit <= 9; digit++)
		putchar(digit + '0');
	putchar('\n');

	return (0);
}
