#include <stdio.h>
#include "main.h"
/**
 * main - Prints the number of argument passed into it
 * @argc: number of arguments
 * @argv: arrays of argument
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[]__attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
