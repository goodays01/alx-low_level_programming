#include <stdio.h>

/**
 * main - this is the main function
 *
 * Return: is 0 if successful
 */

int main(void)

{
	char t;

	for (t = 'a' ; t <= 'z' ; t++)
		if (t  != 'q' && t  != 'e')
			putchar(t);
	putchar('\n');
	return (0);
}
