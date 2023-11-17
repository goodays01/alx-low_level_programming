#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/*
 * main - this is the first successful entry
 *
 * Return: this is sometimes 0 if successful
 */
int main(void)
{
		int n;

			srand(time(0));
				n = rand() - RAND_MAX / 2;
					/* your code goes there */
				if (n > 0)
					printf("%du is positive", n);
				else if (n == 0)
					printf("%du is zero", n);
				else
					printf("%du is negative", n);
				printf("\n");
					return (0);
}
