#include "main.h"
/**
 * _strlen - returns the length of a string
 * @s: string which its lenght is been returned
 *
 * Return: the lenght of the string
 */
int _strlen(char *s)
{
	int t;

	t = 0;
	while (s[t] != '\0')
	{
		t++;
	}
	return (t);
}

