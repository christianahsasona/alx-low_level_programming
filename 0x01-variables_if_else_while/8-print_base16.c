#include <stdio.h>
/**
 * main - program that prints the numbers of base 16
 * in lower case followed by a new line
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a;
	char y;

	for (a = 48; a < 58; a++)
	{
		putchar(a);
	}
	for (y = 'a'; y <= 'f'; y++)
	{
		putchar(y);
	}
	putchar('\n');
	return (0);
}
