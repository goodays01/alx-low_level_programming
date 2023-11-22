#include <stdio.h>

/**
 * main - the main function
 *
 * Return: if successful should be zero
 */

int main(void)

{
	char y;

	for (y = 'a' ; y <= 'z' ; y++)
		if (y != 'q' && y != 'e')
			putchar(y);
	putchar('\n');
	return (0);
}

