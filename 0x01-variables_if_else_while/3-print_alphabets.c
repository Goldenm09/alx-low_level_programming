#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase, then uppercase.
 *
 * Return: Always 0 (Success).
 */
int main(void)
{
	char lower;
	char upper;

/* Print lowercase alphabet */
	for (lower = 'a'; lower <= 'z'; lower++)
	{
		putchar(lower);
	}

	/* Print uppercase alphabet */
	for (upper = 'A'; upper <= 'Z'; upper++)
	{
		putchar(upper);
	}

	putchar('\n');

	return (0);
}
