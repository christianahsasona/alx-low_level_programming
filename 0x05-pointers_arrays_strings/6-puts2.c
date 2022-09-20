#include "main.h"
/**
 * puts2 - prints every character of a string
 * starting with the first charater followed by a newline
 * @str: the string to print every character from
 */
void puts2(char *str)
{
	int i, j;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	for (j = 0; j < i; j += 2)
	{
		_putchar(str[j]);
	}
	_putchar('\n');
}
