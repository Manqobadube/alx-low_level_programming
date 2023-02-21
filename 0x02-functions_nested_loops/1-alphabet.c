#include "main.h"

/**
 * print_alphabet - print all alphabet
 */
void print_alphabet(void)
{
	int ten;
	char la;

	for (ten = 0; ten <= 9; ten++)
	{
		for (la = 'a'; la <= 'z'; la++)
			putchar(la);
		_putchar('\n');
	}

}
