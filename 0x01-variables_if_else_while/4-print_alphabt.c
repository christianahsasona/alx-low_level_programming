#include <stdio.h>
/**
 * main - prints the alphabet in lower case
 * except letter q and e
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch = 'a';
	while (ch <= 'z')
	{
		if (ch != 'e' && ch != 'q')
		{
			putchar(ch);
		}
		ch++;
	}
	putchar('\n');
	return (0);
}
