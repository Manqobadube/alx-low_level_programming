include "main.h"
/**
 * print_line - straight line
 * @n: input
 * Return: straight line
 */
void print_line(int n)
{
	int co;

	if (n <= 0)
	{
	_putchar('\n');
	}
	else
	{
	for (co = 1; co <= n; co++)
	{
	_putchar('_');
	}
}

