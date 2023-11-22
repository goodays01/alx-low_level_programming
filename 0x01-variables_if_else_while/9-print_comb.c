#include <stdio.h>

/**
 * main - this is the main function
 *
 * Return: if successful, is 0
 */

int main(void)

{
	int b;

	for (b = 0 ; b < 10 ; b++)
	{
		if (b == 9)
			putchar(b + '0');
		else
		{
			putchar(b + '0');
			putchar(',');
			putchar(' ');
		}	
	}
	return (0);
}
