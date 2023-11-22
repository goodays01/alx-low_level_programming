#include <stdio.h>

/**
 * main - this is the main function
 *
 * Return: if successful, must be 0
 */

int main(void)
{

	int r;
	char s;

	for (r = 0 ; r < 10 ; r++)
		putchar(r + '0');
	for (s = 'a' ; s <= 'f' ; s++)
		putchar(s);
	putchar('\n');
	return (0);
}
