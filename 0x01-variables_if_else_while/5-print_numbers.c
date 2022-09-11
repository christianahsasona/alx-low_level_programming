#include <stdio.h>
/**
* main - program that outputs base 10 
*single digits and then a new line using putchar() command
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int x;

	for (x = 0; x < 10; x++)
	{
		printf("%d", x);
	}
	printf("\n");
	return (0);
}
