#include <stdio.h>

/**
 * main - prints
 *
 * Return: 0
 */

int main(void)
{
	int digit;
	char letter;

	for (digit = 0; digit <= 9; digit++)
		putchar(digit + '0');
	for (letter = 'a'; letter <= 'f'; letter++)
		putchar(letter);
	putchar('\n');

	return (0);
}
