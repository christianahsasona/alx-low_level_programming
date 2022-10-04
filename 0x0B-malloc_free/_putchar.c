#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes char to stdout
 * @c: The character to print
 */
int _putchar(char c)
{
	return(write(1, &c, 1));
}
