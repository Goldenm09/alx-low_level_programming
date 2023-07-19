#include "main.h"

/**
 * print_alphabet_x10 - prints the lowercase alphabet 10 times followed by a new line.
 */
void print_alphabet_x10(void)
{
	char ch;
	int i, j;

	for (i = 0; i < 10; i++)
	{
		ch = 'a';
		for (j = 0; j < 26; j++)
		{
			_putchar(ch);
			ch++;
		}
		_putchar('\n');
	}
}
