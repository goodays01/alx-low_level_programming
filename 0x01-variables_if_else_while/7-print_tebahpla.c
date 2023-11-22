#include <stdio.h>

/**
 * main - this is the main function
 *
 * Return: must be 0 if successful
 */

int main(void)

{
	char p;

	for (p = 'z' ; p >= 'a' ; p--)
		putchar(p);
	putchar('\n');
	return (0);
}
