#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - ptint 98
 * @n: number to start from
 * Return: 0 to 1
 */
void print_to_98(int n)
{
	while (n < 98)
	{
		printf("%d, ", n);
		n++;
	}
	while (n > 98)
	{
		printf("%d, ", n);
		n--;
	}

	printf("98");
	putchar('\n');
}
