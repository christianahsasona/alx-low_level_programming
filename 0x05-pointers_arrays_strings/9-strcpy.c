#include "main.h"
/**
 * _strcpy - copies the string poined by src
 * including terminating null byte (\0) to the buffer
 * pointed to by dest
 * @dest: pointer to buffer from which the string is copied
 * @src: the string to be copied
 *
 * Return: The pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i, j;

	i = 0;
	while (src[i] != '\0')
	{
		i++;
	}
	for (j = 0; j < i; j++)
	{
		dest[j] = src[j];
	}
	dest[j] = '\0';
	return (dest);
}
