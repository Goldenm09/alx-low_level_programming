#include "main.h"
#include <stdio.h>

/**
 * times_table - prints the 9 times table, starting with 0.
 */
void times_table(void)
{
int row, col, product;

for (row = 0; row <= 9; row++)
{
for (col = 0; col <= 9; col++)
{
product = row * col;

if (col != 0)
{
printf(", ");
}
if (product < 10 && col != 0)
{
printf(" ");
}

printf("%d", product);
}
printf("\n");
}
}
