#include <stdio.h>

/**
 * main - this is the main function
 * 
 * Return: if successful, should be 0
 */

int main(void)

{
	char u;

	for (u = 'a' ; u <= 'z' ; u++)
		putchar(u);
	for (u = 'A' ; u <= 'Z' ; u++)
		putchar(u);
	putchar('\n');
	return (0);
}
