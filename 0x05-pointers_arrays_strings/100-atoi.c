#include "main.h"
/**
 * _atoi - converts a string to integer
 * @s: the string to be converted to integer
 *
 * Return: the integer convetred from string
 */
int _atoi(char *s)
{
	int a, b, n, len, i, number;

	a = 0;
	b = 0;
	n = 0;
	len = 0;
	i = 0;
	number = 0;
	while (s[len] != '\0')
	{
		len++;
	}
	while (b < len && i == 0)
	{
		if (s[a] == '-')
			++b;
		if (s[i] >= '0' && s[i] <= '9')
		{
			number = s[i] - '0';
			if (b % 2)
				number = -number;
			n = n * 10 + number;
			i = 1;
			if (s[a + 1] < '0' || s[i + 1] > '9')
				break;
			i = 0;
		}
		i++;
	}
	if (i == 0)
		return (0);
	return (n);
}
