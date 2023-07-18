#include <unistd.h>
#include "main.h"

/* Custom _putchar implementation */
int _putchar(char c)
{
	return write(1, &c, 1);
}
