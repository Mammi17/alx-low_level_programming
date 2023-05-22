#include <unistd.h>

/**
 * main - entry block
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
